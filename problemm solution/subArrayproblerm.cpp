#include <iostream>
using namespace std;

void sorted(vector <int> &arr){
    int l = arr.size();

        for (int i = 0; i <= l - 2; i++) {
        int min_index = i;

        for (int j = i + 1; j <= l - 1; j++) {
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }

        // Swapping values using array indexes
        swap(arr[i], arr[min_index]);
    }
}

int main(){
    vector <int> arr = {1,2,4,3};
    sorted(arr);


    vector <vector<int>> subArray;

    int n = arr.size();

    for(int i= 0 ; i < n ; i++){
        for(int j = i ; j<n ; j++){
            vector <int> temp;
            for(int k = i ; k <=j ;k++){
                temp.push_back(arr[k]);
            }
            subArray.push_back(temp);
        }
    }

    for(auto it : subArray ){
        for(int i =0 ; i < it.size() ; i++){
            cout << it[i] << " ";
        }
        cout << endl;
    }
    return 0;
}