#include <iostream>
#include <map>
using namespace std;

int better(vector <int> &arr , int k ){
    map <int , int> hash;

    int n = arr.size();
    int sum =0;

    // int prevSum = 0;

    int len =0;
    for(int i =0 ; i< n ; i++){
        sum+= arr[i];
        int ch=1;
        for(auto it : hash){
            if(it.first==sum){
                ch=0;
                break;

            }
        }
        if(ch) hash[sum] = i;
        for(auto it: hash){
            if(it.first==sum){
                ch=0;
                break;

            }
            if(ch) hash[sum] = i;
            if(it.first == sum-k){
                
                if(len <= i-it.second){
                    len = i-it.second;
                }
            }
        }

    }
    return len;

}

int optimal(vector <int> &arr,int k ){
    int len =0;
    int i=0;
    int j = 0;
    int sum =arr[0];

    while(i < arr.size()){
        //here you might think that the tc is O(n2) buts this is not the case the time complexity is only O(2N)
        //because the innerwhile loop is runing n times in the entire outer while loop 
        while(j<=i && sum > k){
            sum -= arr[j];
            j++;

        }
        if(k==sum){
            len = max(len,i-j+1);
        }
        i++;
        if(i<arr.size()) sum += arr[i];

    }
    return len;
}

int main(){
    vector <int> arr = {1,3,1,1,1,1,4,2,3,1,1,1,2};
    int k = 5;
     

    cout << optimal(arr , k) << endl;
    return 0;
}