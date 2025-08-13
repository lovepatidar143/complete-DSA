#include <iostream>
using namespace std;

void insertion_sort(int arr[] , int n){
    int count=0;
    for(int i= 0 ; i < n ; i ++ ){
        int j= i ; 

        while (j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1] ,arr[j]);
            j--;
            count ++;

        }
    }
    cout << count << endl;
}

int main(){
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int l =10;

    insertion_sort(arr,l);
    for (auto it : arr ){
        cout << it << " ";

    }
}