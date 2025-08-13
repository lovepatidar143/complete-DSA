#include <iostream>
using namespace std; 

bool pali(string s , int i , int l){
    if ( i> l/2) return true;
    if (s[i]== s[l-i-1]) return pali(s,i+1,l);
    else return false;



}

int main (){
    string s ;
    cout << "enter the string here :- ";
    // cin >> s;
    getline(cin , s);
    cout << s << endl;
    int l = s.size();

    cout << endl << pali(s,0,l);

    return 0; 
}