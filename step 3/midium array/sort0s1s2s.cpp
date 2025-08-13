#include <iostream>
using namespace  std;
 // namespace  std;
 void sort(vector <int> &arr ){
    int n = arr.size();
    int hash[3] ={0};
    for(int i = 0 ; i< n ; i++){
      hash[arr[i]]++;
        
    }
   
    int p =0;
    for(int i =0 ; i< 3 ; i++){
        for(int j =0 ; j< hash[i] ; j++){
            arr[p++] = i;
        }
    }
 }

int main(){
    vector <int> arr = {0,1,2,1,1,2,2,0,0,0,2,1,1,0,1,2,0,1,1,1,2,2,2,0,2,1,0,0,0,0,1,2};
    sort(arr);
    for(auto it: arr){
        cout << it << " ";
    }
    return 0;
}