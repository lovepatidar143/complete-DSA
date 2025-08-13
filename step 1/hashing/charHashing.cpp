#include <iostream> 
using namespace std; 

int main(){
    string s ; 
    getline(cin , s);

    //precompute
    int hash[26]={0};
    for (int i= 0 ; i< s.size() ; i++){
        hash[s[i] - 'a'] ++;

    }

    //fetching
    cout << endl << "ente the no. : - ";
    int x;
    cin >> x;
    while(x--){
        char ch ;
        cin >> ch;
        cout << "the frequency of the " << ch << " is " << hash[ch - 'a']   ;
     }
    return 0;

}