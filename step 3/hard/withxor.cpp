#include <iostream> 
using namespace std; 
int optimal(vector <int> nums , int target){
    int ans =0 ; 
    int n = nums.size();
    unordered_map <int , int > hash;
    hash[0] = 1;
    int xr=0;
    for(int i =0 ; i < n ; i++){
        xr ^= nums[i];
        int need = xr^target;
        ans += hash[need];
        hash[xr]++;


        
    }
    return ans; 
}
int main(){
    vector <int> nums = {4,2,2,6,4};
    int target = 6;
    cout << optimal(nums , target);

    return 0; 
}