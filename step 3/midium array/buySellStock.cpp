#include <iostream>
using namespace std; 
int sell(vector <int> arr){
    int n = arr.size();
    int cost = arr[0];
    int sell;
    int profit = INT_MIN;

    for(int i =0 ; i < n ; i++){
        if(arr[i]>cost){
            //sell
            sell = arr[i] - cost;
            profit = max(profit , sell);

        }else{
            //buy
            cost = arr[i];
        }
    }
    return profit;
}
int main(){
    vector <int> arr = {5,7,6,4,3,10,2,11,8,23,7,12,21,11,0,8,1,2,4,67};
    cout << sell(arr) << endl;
    
    return 0;
}
