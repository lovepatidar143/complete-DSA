#include <iostream>
using namespace std;

vector <vector <int> > subArray(vector <int> &arr , int k ){
    vector<vector <int>> sub;

    int n = arr.size();
    int sum;

    for(int i= 0 ; i <n ; i++){
        for (int  j = i; j < n; j++)
        {
            /* code */
            vector <int> temp;
            sum =0;
            for(int p = i ; p<=j ; p++){
                sum += arr[p];
                temp.emplace_back(arr[p]);


            }
            if (sum == k) sub.push_back(temp);
        }
        }
    return sub;
}

int main(){
    vector <int> arr = {1,2,3,1,1,1,1,4,2,3};

    int k = 3;

    auto sub = subArray(arr,k);

    for(auto el : sub){
        for (auto it : el){
            cout << it << ' ';
        }
        cout << "\n";
    }
    int n = sub.size();
    int max =0;
    int i;
    for(int j =0 ; j< n ; j++){
        if(max <= sub[j].size()){
            max= sub[j].size();
            i =j;
        }
        
    }
    cout << " longest array :- ";
    for(auto it : sub[i]){
        cout << it << ' ';
    }
    cout << endl;
}