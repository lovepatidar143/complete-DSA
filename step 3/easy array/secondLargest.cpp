#include <iostream>
using namespace std;
//brute force solution 
// have time c O(NlogN + N)
int brute(vector <int> &arr){
    //i will sort the arrya and catch a loop from last and by comparing it with the larget i will update the second largest accordingly
    return 0;

}

int better(vector <int> &arr){
    //BETTER solutio have the tc of P(2N)

    int max = arr[0];
    for (int i =0 ; i < arr.size() ; i++){
        if (arr[i]>max) max =arr[i];
        
    }

    int smax = arr[0];
    for (int i = 0 ; i< arr.size() ; i++){
        if(arr[i]> smax && arr[i] != max) smax = arr[i];

    }
    return smax;
}
//
int optimal(vector <int> &arr){
    //have the tc to O(N) only
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i]>max){
            smax = max ; 
            max=arr[i];
        }
        // else{
        //     if(arr[i]>smax){
        //         smax = arr[i];      there is mistake in this when tehe maximym number is repeated
        //     }
        // }
        else if(arr[i]< max && arr[i]> smax){
            smax =arr[i];
        }




    }

    return smax;

}
int main(){
    vector <int> arr = {1,2,3,4,4,7,6,9,6,9};
    cout << "the second lasrget element is " << better(arr)<< endl;
    cout << "the second lasrget element is " << optimal(arr) << endl ;

    return 0;
}