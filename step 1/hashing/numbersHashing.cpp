#include <iostream>
#include <vector>

using namespace std ;

int main(){
    int n ; 
    cout << "enter the size of an aray ;-" ;
    cin >> n;
    int arr[n]; // you cant initialixe an array hwhen its has a dynamic ror variable size;

    for(int i =0 ; i <n ; i++)
    {
        cin >> arr[i];
    }

    //precompute
    cout << endl ; 

    int hash[1000000] ={0};
    for (int i = 0 ; i< n ; i++) {
        hash[arr[i]]++;
    }

    //fething
    
    int x;
    cin >>x;
    while (x--){
        int i;
        cin >> i ;
        cout << "frequency of " << i << "is :-" << hash[i];
    }
}