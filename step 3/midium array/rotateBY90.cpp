#include <iostream> 
using namespace std;
vector<vector<int>> brute(vector<vector<int>> &matrix){
    int n = matrix.size();
    vector<vector<int>> ans(n,vector<int>(n,0));
    
    int i =0  , j=0;

    for(int p = n-1; p>=0 ; p--){
        j=0;
        for(int q= 0 ; q<n; q++){
            ans[q][p] = matrix[i][j];
            j++;
        }
        i++;
    }
    return ans;
}
int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    for(auto it:arr){
        for(auto el : it){
            cout << el << ' ';
        }
        cout <<endl;
    }
    cout << "******* After transform ************\n";
    vector<vector<int>> ans = brute(arr);
    for(auto it:ans){
        for(auto el : it){
            cout << el << ' ';
        }
        cout <<endl;
    }
    return 0;
}