#include <iostream>
using namespace std; 

bool armcheck(int n ){
    int dup = n;
    int arm = 0;
    int temp;
    int sum= 1;
    int digitcount = floor(log10(n)) +1;
    while (dup!=0){
        temp = dup%10;
        for (int i = 0 ; i< digitcount ; i++){
            sum = sum *temp;
        }
        arm = arm + sum;
        dup = dup/10;
    }
    if(arm == n) return true;
    else return false;
}

int main (){
    cout << armcheck(371) << endl;
    cout << armcheck(1634) << endl;
    cout << armcheck(407) << endl;
    
    return 0;
}