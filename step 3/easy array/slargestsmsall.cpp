#include <iostream>
using namespace std;

vector <int> optimal(vector <int> &arr){
    int max = INT_MIN;

    int smax = INT_MIN;
    int min = INT_MAX;
    int smin = INT_MAX;
    // 
    for (int i = 0 ; i < arr.size() ; i++){
        //for the smax
        if(arr[i]>max){
            smax = max ;
            max = arr[i];
        }else if(arr[i] < max && arr[i]>smax){
            smax =arr[i];
        }

        // for the smin

        if(arr[i]< min){
            smin = min;
            min = arr[i];
        }
        else if(arr[i]>min && arr[i]<smin){
            smin = arr[i];
        }


    }

    return {smin , smax};
}

int main(){
    vector <int> arr = {1,1,2,3,4,5,5,4,3,2,1};
    cout << "the second largest and the min in the arry is" << optimal(arr)[0] << endl << optimal(arr)[1] << endl;
    return 0;
}