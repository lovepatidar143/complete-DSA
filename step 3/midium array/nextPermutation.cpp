#include <iostream>
using namespace std;
void next_permutation(vector <int> &arr){
    int n = arr.size();
    int ind = -1;
    for(int i = n-2 ; i>=0 ; i--){
        if(arr[i] < arr[i+1]) ind =  i;
    }
    for(int i =  n-1 ; i>=i+1 ; i--){
        if(arr[i]>arr[ind]) swap(arr[i],arr[ind]);
    }
    reverse(arr.begin()+ind+1 , arr.end());
}
int main(){
    // vector <int> arr = {2,1,5,4,3,0,0};
    vector <int> arr = {3,2,1};
    next_permutation(arr);
    for(auto it : arr){
        cout << it << " ";
    }
    return 0;
}