#include <iostream>
using namespace std;


void checkPrime(int n ){
    vector <int> v;
    for (int i = 1 ; i*i <= n ; i++ ){
        if(n%i == 0){
            v.emplace_back(i);
            if (n/i != i) v.emplace_back(n/i);
        }
    }


    if (v.size() == 2) cout << "the no is the prime no :-" << n <<endl;
    else cout << "the no is not a prime no. :-" << n <<endl;

    // space cpmplexity juda ho gai bha ii isse achha counter varible use kr le har bar cout badate rehne ik if bhi kam likha pdega smjga thisk he bhia byy
}
int main(){
    checkPrime(1);
    checkPrime(2);
    checkPrime(4);
    checkPrime(6);
    checkPrime(19);
    return 0;
}