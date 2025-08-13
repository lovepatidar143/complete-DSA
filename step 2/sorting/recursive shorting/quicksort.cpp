#include <iostream>
using namespace std;

int part(vector <int> &arr , int low , int high){
    int pvt = arr[low];
    int i = low ;
    int j =high;

    while (i <= j){

        while (arr[i]<=pvt && i <= high-1){
            i++;
        }
        while (arr[j]>pvt && j >= low+1){
            j--;
        }

    while (i <= j) {
    // correct comparisons...
    swap(arr[i], arr[j]); // always swaps even when i > j
}

    }
    
    swap(arr[low],arr[j]);
    return j;
}

void qs(vector <int> &arr , int low , int high ){
    if (high <= low) return;
    int pi = part(arr , low , high);

    qs(arr,low,pi-1);
    qs(arr,pi+1,high);
}

void quickSort(vector <int> &arr){
    int low = 0;
    int high = arr.size() -1 ;
    qs(arr , low , high);
}
int main(){
    vector <int> arr = {4,6,2,5,7,9,1,3};
    quickSort(arr);
    return 0;

    for(auto it : arr){
        cout << it << " ";
    }
}