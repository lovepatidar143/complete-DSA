#include <iostream> 
#include <cmath>
using namespace std;

void printDivisors(int n ){
    vector <int> v;
    //not use fincton sqrt vo bhi time lega so write 
    // time complexity O(sqrt(n))
    for (int i =0 ; i*i <= n ; i++){
        if (n%i == 0){
            v.emplace_back(i);

            if (n/i != i) {
                v.emplace_back(n/i);

            }
        }

    }
    // time complexity log(no of factior of n)
    sort(v.begin() , v.end());
     // time complexity log(no of factior of n)
    for (auto it : v){
        cout << it << " ";
    }

    //over all time complexirty O(sqrt n) + 2* log (factores of n)
}

int main(){
    printDivisors(1025);

    return 0;
}