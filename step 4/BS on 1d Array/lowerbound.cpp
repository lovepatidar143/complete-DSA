#include <iostream>
using namespace std; 
int lower_bound(vector <int> &arr , int x){
    sort(arr.begin(),arr.end());

    int ans = arr.size();

    int low = 0  , high = arr.size() -1 ; 

    while(low<=high){
        int mid = (low + high )/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid -1 ; 
        }else{
            low = mid+1;
        }



        
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3,3,5,8,8,10,10,11};
    int x = 10;
    cout << "the lower bound of the x is"  <<  lower_bound(arr,x) << endl; 
    return 0;
}