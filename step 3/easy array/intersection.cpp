#include <iostream>
using namespace std;
//tc is O(nssquare ) when no intersection is there
// sc is O(2n)
//brute force approach
vector <int> interesection(vector <int> &arr , vector <int> & nums){
    int a = arr.size();
    int b = nums.size();

    vector <int> inte;
    vector <int> visi(b,0); //visited arrasy 

    for(int i =0 ; i<a ; i++ ){

        for(int j =0 ; j<b ; j++){

            if(arr[i]==nums[j] && visi[j]==0){
                inte.emplace_back(arr[i]);
                visi[j]=1;
                break;
            }
            if(nums[j]>arr[i]) break;

        }
    }
    return inte;
}

//optimal solutin 
//tc is O(N +N)
//sc is O(n);
vector <int> optimal(vector <int> &arr , vector <int> &nums){
    int a = arr.size();
    int b = nums.size();

    int i =0;
    int j =0;

    vector <int> inte;

    while (i<a && j<b)
    {
        /* code */
        if(arr[i]==nums[j]){
            inte.emplace_back(arr[i]);
            i++;
            j++;
        }else if(arr[i]>nums[j]){
            j++;
        }
        else{
            i++;
        }
    }
    return inte;
    


}
int main(){
    vector <int> arr = {1,2,2,3,4,5,6,7,7,7,8};
    vector <int> nums = {2,2,6,7,7,7,8,9,90,990};

    // vector<int> inte = interesection(arr,nums);
    vector<int> inte = optimal(arr,nums);
    

    for(auto it  : inte){
        cout << it << " ";
    }

    return 0;
}