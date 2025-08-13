#include <iostream>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n = nums.size();
        
        vector <int> hash;
        int max =0;

        for(int i =0 ; i < n ; i++){
            if(nums[i] == 1){
                max++;
            }else{
                hash.emplace_back(max);
                max=0;
                // if(premax <= max){
                //     premax = max;
                //     max=0;
                // }
            }
        }
        for(auto it : hash){
            if(it>= max) max =it;
        }
        return max;
        // if(premax>=max) return premax;
        // else return max;
    }
};



int main(){
    return 0;
}