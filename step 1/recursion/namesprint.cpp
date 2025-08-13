#include <iostream>
using namespace std;

void print_name(string s , int x=5 ){
    if (x== 0) return;
    cout << s << endl;
    print_name(s , x-1);
    
}

int main(){
    print_name("love patidar" , 3);
}