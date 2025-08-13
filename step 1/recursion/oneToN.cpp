#include <iostream>
using namespace std;

void PrintN(int x){
    // this will print from one to n
    if (x==0) return;
    PrintN(x-1);
    cout << x << " ";

}
int main(){
    PrintN(23);
    return 0;
}