#include <iostream> 
using namespace std; 
//pseudo code 
//  break mearge sorted 

//  merge low to high 
//  mid = low + high /2 
//  merge low to mid 
//  merge mid+1 to high 
//  now merge these to array

void merge_sort(int arr[] , int low , int high){

    if (low >= high) return ; 
    int mid = (high +low )/2;

    merge_sort(arr , low , mid);
    merge_sort(arr , mid+1 , high);
    
   int st = low ;
   int st2 = mid +1;

   vector <int> temp;


}
int main() {
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int l =10;

    merge_sort(arr,0,l);
    for (auto it : arr ){
        cout << it << " ";

    }


    return 0 ;
}