#include <iostream> 
using namespace std ;

int function1(int n , int m){


    int low = 0  , high = n;

    while(low <=high){
        long long mid = (low + high)/2 ; 
        long long cur = pow(mid,m);

        if(n == cur) return mid ;
        else if(cur<n) low = mid +1 ; 
        else high = mid -1 ;
    }
    return -1 ;
}

int main(){
    int t ; 
    cin >> t;
    for(int i = 0 ; i< t ; i++){
        cout << "\n enter the no :- ";
        int x ;
        cin >> x ;
        cout << "enter th nth ;-" ;
        int p ; 
        cin >> p;
        cout << "the no is ;_" << function1(x,p) << endl;
    }

    return 0 ;
}