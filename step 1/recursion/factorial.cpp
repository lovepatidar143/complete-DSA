#include <iostream>
using namespace std; 
//tc = O(n)
//sc = O(n)

int facto(int x)
{
    if (x== 0) return 1;
    int fact;
    fact = x * facto(x-1);
    return fact;
}

int main (){

    cout << facto(5)<< endl;
    cout << facto(0)<< endl;
    cout << facto(01)<< endl;
    cout << facto(10)<< endl;
    cout << facto(1)<< endl;
    return 0;
}