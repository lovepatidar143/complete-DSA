#include <iostream>
using namespace std;
void printN(int x){
    if (x==0) return ; 
    cout << x << " ";
    printN(x-1);
}

int main(){
    printN(32);
    return 0;
}