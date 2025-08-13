#include <iostream>
using namespace std;
int  sum(int x , int s =0){
    if (x == 0) return s;

    s = sum(x-1 , x+s);
    return s;


}

int sum2(int x){
    if (x == 0) return 0;
    int ans = x + sum2(x-1);
    return ans;

}
int main(){
    cout << sum(52345)<< endl;
    cout << sum2(52345)<< endl;

    return 0;
}