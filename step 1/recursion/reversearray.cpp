#include <iostream> 
#include <deque>
using namespace std;
// this & tells that we want call by referemnc if we dont write it it will simply made a copy of that array

void reverse_array(deque <int>& arr1){
    if ( arr1.empty()) return;
    int front = arr1.front();

    arr1.pop_front();
    reverse_array(arr1);
    arr1.push_back(front);
    return;
}


int main (){
    deque <int> arr1 = {1,2,3,4,5};
    for (auto it : arr1){
        cout << it << " ";
    }
    cout << endl;
    reverse_array(arr1);
    for (auto it : arr1){
        cout << it << " ";
    }
    return 0;
}
