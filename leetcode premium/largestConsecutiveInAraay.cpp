#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
//problem statement :- you have to return the longest possible subarray consecutive in an array 
// you xan select the element from anywhere in the array ans you have to retrun the length of the longest possible conse utinve sequence 

// Eg. arr = {102/4/100/1,101,3,2,1,1}
 //ans is the 4 with the element 1234

//tc is O(3N)


int better(vector <int> &arr){
    int len =1 , prev =1 ;

    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i = 1 ; i<n ; i++){
        if(arr[i-1]==arr[i]) continue;
        if(arr[i-1]+1 == arr[i]){
            len++;
            prev= max(prev,len);

        }else{

            len =1;
        }
    }
    return prev;
}

int optimal(vector <int> &arr){
    unordered_set <int> st;
    int n = arr.size();
    for(int i = 0 ; i<n ; i++){
        st.insert(arr[i]);
    }
    
    int longest =1;
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int ct =it;
            int len =0;
            while(st.find(ct)!=st.end()){
                len++;
                ct++;

            }
            longest = max(longest,len);
        }
    }
    return longest;
}
int main(){
    vector<int> arr = {102,4,100,1,101,3,2,1,1,5,0,8,9,10,11,12,13,13,13,14,14,14,1,1,15,15,15,16,16,16,11,17,17,18,19};
    cout << optimal(arr) << endl;
     return 0;
}