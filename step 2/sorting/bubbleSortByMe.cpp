#include <iostream>
using namespace std; 
// time complexity is o(n2) best case is O(n) when the array is sorted
void bubble_sort(int arr[] , int n){
    int count =0;
    for(int i =n-1 ; i >0 ; i--){
        int swap_done = 0 ;

        for ( int j = 0 ; j < i ; j++ ){
            if (arr[j]> arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swap_done = 1;
                
            }
            count ++;
        }
        if (swap_done == 0) break;
        
    }
    cout << endl << count << endl;

}
int main(){
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int l =10;

    bubble_sort(arr,l);
    for (auto it : arr ){
        cout << it << " ";

    }
    return 0;
}