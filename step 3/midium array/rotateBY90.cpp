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
// both have the tc 0f O(nsquare) brute have the tc of n2 also but optumal have no1 )
void transpose(vector<vector<int>> &matrix){
    int n = matrix.size();

    for(int i =0 ; i< n ; i++){
        for(int j =0 ; j<i ; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i =0 ; i<n; i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> arr1(arr);
    for(auto it:arr){
        for(auto el : it){
            cout << el << ' ';
        }
        cout <<endl;
    }
    transpose(arr);
    cout << "******* After transform ************\n";
    for(auto it:arr){
        for(auto el : it){
            cout << el << ' ';
        }
        cout <<endl;
    }
    cout << "******* After transform ************\n";
    vector<vector<int>> ans = brute(arr1);
    for(auto it:ans){
        for(auto el : it){
            cout << el << ' ';
        }
        cout <<endl;
    }
    return 0;
}