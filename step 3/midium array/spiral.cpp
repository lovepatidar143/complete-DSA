#include <iostream> 
using namespace std;
vector <int> spiral(vector <vector <int>> arr){
    int n = arr.size() , m= arr[0].size();
    int top = 0  , bot = n-1 , left =0, right = m-1;

    vector <int> ans;
    while(left<=right || top <=bot){
    for(int i =left ; i<=right; i++){
        ans.push_back(arr[top][i]);
    }
    for(int i = top+1 ; i<=bot ; i++){
        ans.push_back(arr[i][right]);
    }
    for(int i = right -1 ; i>=left ; i--){
        ans.push_back(arr[bot][i]);
    }
    for(int i =bot-1 ; i>=top+1 ; i--){
        ans.push_back(arr[i][left]);
    }
    left++;
    right--;
    top++;
    bot--;
}
    return ans;
}
int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    vector <int> ans = spiral(arr);
    for(auto it : ans){
        cout << it << " ";
    }
    //[1,2,3,6,9,8,7,4,5]
    return 0;
}