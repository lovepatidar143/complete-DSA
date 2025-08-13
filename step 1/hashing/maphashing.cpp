#include <iostream>
#include <map>

using namespace std; 

int main(){
    int n;
    cin >> n;
    int arr[n];
    // for(int i= 0 ; i< n ; i++){
    //     cin >> arr[i];
    // }

    //precompute
    unordered_map <int , int > hash_map; //for character map <char , int > 
    //use unorderd map bcz the map is sorted takes logn for fething and adding storing
    for(int i= 0 ; i< n ; i++ ){
        cin >> arr[i]; // reduce some which is form 2n to n time complexity 
        hash_map[arr[i]]++ ;
    }

    //fething
    cout << "\n enter th no of sample search;-";
    int q; 
    cin >> q;
    while(q--){
        int i;
        cin >> i;
        cout << "the frequency of " << i << " in the array is " << hash_map[i];
    }

    return 0;
}