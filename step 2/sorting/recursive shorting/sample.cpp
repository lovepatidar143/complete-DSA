#include <iostream> 
using namespace std; 

int main (){
    int arr[] = {1, 5, 7};
    int brr[] = {2, 3, 6};
    vector <int> res; 
    int a=0 , b=0;
    while (a<2 && b<2){
        if(arr[a]<brr[b]){
            res.push_back(arr[a]);
            a++;
        }else{
            res.push_back(brr[b]);
            b++;
        }
    }
    while(a<2){
        res.push_back(arr[a]);
        a++;
    }
    while(b<2){
        res.push_back(arr[b]);
        b++;
    }

    for(auto it : res){
        cout << it << " ";
    }

    return 0;
}