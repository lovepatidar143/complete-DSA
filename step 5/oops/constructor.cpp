#include <iostream> 
using namespace std ; 
class Car{
    public :
    int a , b , c ; 

    Car(int a , int b , int c);
};

Car :: Car(int i , int o , int p ){
    a = i ;
    b=o ;
    c = p;
}
int main(){
    Car bmw(1,2,3);
    cout << bmw.a;

    return 0 ; 
}