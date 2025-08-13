#include <iostream>
using namespace std;
int love_algo(vector <int> arr){
    int n = arr.size();

    int sum =0;
    int maxi = INT_MIN;
    for(int i = 0 ; i< n ; i++){
        if(sum<0) sum=0;
        sum +=arr[i];
        maxi = max(maxi , sum);

    }
    return sum;
}
vector <int> love(vector <int> arr){
    int n = arr.size();

    int sum =0;
    int start =0 , end =0;
    int maxi = INT_MIN;
    for(int i = 0 ; i< n ; i++){
        if(sum<0) {
            sum =0;
            start =i;
        }
        sum +=arr[i];
        if(sum>=maxi){
            maxi = sum;
            end =i;
        }
    }
    return {maxi,start ,end};
}
int main(){
    vector <int> arr=  {-2,1,-3,4,-1,2,1,-5,4};
    for(auto it : love(arr)){
        cout << it << " ";
    }
    cout << endl;
    for(int i = love(arr)[1] ; i<=love(arr)[2];i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}