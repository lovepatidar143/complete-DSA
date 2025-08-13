#include <iostream>
using namespace std;
int maximum(vector <int> &arr){
    int max = arr[0];
    for(int i=0 ; i< arr.size() ;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    vector <int> arr = {1,1,2,3,4,5,6,4,4,0,4,4,5,0,1,3,2,3,3,2,2,5,9,12,5,3,2,3,235,3,0,3};
    cout << "max of the array is " << maximum(arr);

    return 0;
}