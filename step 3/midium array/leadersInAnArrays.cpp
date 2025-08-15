#include <iostream>
using namespace std; 

vector <int> leaders(vector <int> arr){
    int n = arr.size();
    int max = INT_MIN ; 
    vector <int> lead;

    for(int i =n-1 ; i>=0 ; i--){
        if(arr[i]>max){
            lead.push_back(arr[i]);
            max = arr[i];

        }else{
            
        }

    }
    return lead;
}
int main(){
    vector <int> arr = {11,22,12,3,0,6,-1};
    for(auto it: leaders(arr)){
        cout << it << " ";
    }
    // cout << leaders(arr)[4];
    return 0;
}