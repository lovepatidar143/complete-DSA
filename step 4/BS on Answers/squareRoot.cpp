#include <iostream>
using namespace std;
void program(){
    int n ; 
    cout << "\nenter the no :- ";
    cin >> n;

    int high = n/2+1 , low = 0 ; 
     while(low <= high){
        int mid = (low + high)/2;

        if(mid * mid == n ){
            cout << "\nthe squroot is " << mid<< endl;
            break;

        }
        else if(mid * mid < n && (mid+1)*(mid+1)>n){
            cout << "\nneatest to the square of ;-" << mid;
            break;
        }else if(mid*mid > n && (mid-1)*(mid-1)<n){
            cout << "\nneatest to the square of ;-" << mid;
            break;
            
        }else if (mid * mid < n){
            low = mid +1 ;

        }else{
            high = mid -1;
        }
     }
}

int program1(){
    int n ; 
    cout << "enter the nombert";

    cin >> n ; 

    int high = n/2+1 , low = 0 ; 
    int ans ;
    while(low<=high){
        int mid = (low + high)/2;
        if(mid*mid == n ) return mid ; 
        else if(mid *mid < n){
            ans = mid ;
            low = mid +1 ;
        }else {
            high = mid -1 ;
        }
    }
    return ans;

}

int main(){
    int t ; 
    cout << "enter the no of test cases :- ";
    cin >> t ; 
    for(int i = 0 ; i< t ; i++){
        program();
    }
}