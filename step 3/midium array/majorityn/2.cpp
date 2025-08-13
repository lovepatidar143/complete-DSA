#include <iostream> 
using namespace std; 
int optimal(vector <int> arr){
    int n =arr.size();
    int el = arr[0];
    int count = 0;

    for(int i =0 ; i< n ; i++){
        if(el == arr[i]){
            count++;
        }else{
            count--;
        }

        if(count ==0){
            el = arr[i+1];
        }
    }
    return el;

}
int main(){
    vector <int> arr = {2,2,1,1,1,2,2};
    cout << optimal(arr) << endl;
    return 0;
}