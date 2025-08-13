#include <iostream> 
using namespace std; 

void rev(int i , int arr[] , int n){
    if (i > n/2) return ;

    swap(arr[i] , arr[n-i-1]);

    rev(i+1 ,arr, n);
    return;

}

int main (){
    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++ ) cin >> arr[i];

    for (auto it : arr){
        cout << it  << " ";
    }


    rev(0, arr , n);
    cout << endl;

    for (auto it : arr){
        cout << it  << " ";
    }
    return 0;
}