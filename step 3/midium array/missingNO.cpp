#include <iostream> 
using namespace std;
// thiss is brute force solutin fomr leetcode having he time coO(nsquare)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        int condi = 0;

        for(int i =0 ; i <= n ; i++){
            for(int j =0 ; j< n ; j++){
                condi =0;
                if(nums[j]==i){
                    condi =1;
                    break;
                }
            }
            if(condi==0){
                ans = i;
                break;
            }
        }
        return ans;
        
    }
};

//better with the hasing 
//tc O(2n) scO(n)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans;

        vector <int> hash(n+1,0);

        for(int i =0 ; i < n ; i++){
            hash[nums[i]] = 1;
        }

        for(int i =0 ; i <=n ; i++){
            if(hash[i]==0){
                ans = i;
                break;
            }
        }
        return ans;
        
    }
};

//optimal solution
//sum method O(n) O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actual_sum = n*(n+1)/2;

        int sum=0;
        for(int i = 0 ; i<n ; i++){
            sum += nums[i];
        }

        return (actual_sum - sum);
        
    }
};

//xor mehtod 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        int xor2 =0;

        for(int i =0 ; i< n ; i++){
            xor1 = xor1^(i+1);
            xor2 = xor2^nums[i];

        }
        return xor1^xor2;
        
    }
};

int main(){
    return 0;
}