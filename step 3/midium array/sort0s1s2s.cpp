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

 void optimal(vector<int> &arr){
    int n =arr.size();

    int low = 0;
    int mid =0;
    int high = n-1;

    while(mid<=high){ //<= aayega the complexity is just o(n)
        if(arr[mid] == 0) {
            swap(arr[mid],arr[low]);
            mid++;
            low++;

        }else if(arr[mid] ==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
 }

int main(){
    vector <int> arr = {0,1,2,1,1,2,2,0,0,0,2,1,1,0,1,2,0,1,1,1,2,2,2,0,2,1,0,0,0,0,1,2};
    optimal(arr);
    for(auto it: arr){
        cout << it << " ";
    }
    return 0;
}