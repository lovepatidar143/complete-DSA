#include <iostream> 
using namespace std; 
void merge(int arr[] , int low , int high , int mid){

    vector <int > temp ;
    int left = low;
    int right = mid+1;
    while (left <= low && right <= high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left ++ ;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left ++;
    }
    while (right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i-low];
    }
}
void ms(int arr[] , int low , int high){
    if (low == high) return ;

    int mid = (high + low)/2;

    ms(arr , low , mid);
    ms(arr,mid+1 ,high);

    merge(arr , low , high , mid);

}

void mergesorts(int arr[] , int n){
    ms(arr , 0 , n-1);
}

int main (){
    int arr[13] = {1,68,5,3,1,6,8,3,9,34,3,68,2};
    for(auto it :arr){
        cout << it << " ";
    }
    cout  << endl;
    mergesorts(arr, 13);
    
    for (auto it : arr){
        cout << it << " ";
    }
    cout << endl;
    return 0;

}