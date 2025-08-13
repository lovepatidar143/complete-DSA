#include <iostream>
#include <set>
using namespace std;
//brute force solution 
//return the no of unique elemets have tc of O(NlogN + N) and sc of O(n)
int brute(vector <int>  &arr){
    set <int> st;
    for(int i =0; i<arr.size() ; i++){
        st.insert(arr[i]);
    }

    int ind = 0;
    for(auto it : st){
        arr[ind] = it;
        ind ++ ;
    }
    return ind;

}

//optimal solution two pointers approach // tc is O(n) sc id just o(1);
int optimal(vector <int> &arr){
    int unique = 0;

    for(int i =1 ; i < arr.size() ; i++){
        if(arr[i]!=arr[unique]){
            unique++;
            arr[unique] = arr[i];


    }
}
    return unique +1;
}
int main(){


    vector <int> arr = {1,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,4,6,7,9,9,9,9,90,90,990,990};
    // cout << "uniqye is : -" << brute(arr) << endl ;
    // for (auto it : arr){
    //     cout << it << " ";
    // }
    cout << endl;
    cout << "uniqye is : -" << optimal(arr) << endl ;
    for (auto it : arr){
        cout << it << " ";
    }
    return 0;
}