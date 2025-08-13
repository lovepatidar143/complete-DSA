#include <iostream>
using namespace std;
// thisw is brute force solution in whcih the TC is O(N+d) and the sc is O(d)
void rotate(vector <int> &arr , int d){
    d = d%arr.size();
    int l =arr.size();
    vector <int> temp(arr.begin() ,arr.begin()+d);
    for(int i =d ; i<arr.size() ; i++){
        arr[i-d] = arr[i];
    }
    for(int i = l-d ; i < l ; i++){
        arr[i] = temp[i+d-l];
    }
}


// now for the optimal solution 

//observation {1,2,3,4,5,6,7,8,9} d = 3
// {4,5,6,7,8,9,1,2,3}
//tri erewverse methjosd
void rotate2(vector <int> &nums , int d ){
    int l = nums.size();
    reverse(nums.begin(),nums.end());

    reverse(nums.begin() ,nums.begin()+(l-d));
    reverse(nums.begin()+(l-d),nums.end());
}

// if i not have stl so make the logic for the reverse 
void reverseArr(vector <int> &arr , int start , int end){
    //here end is excusive which mokes the similar reverse fdunciton 
    //swaping with the tc od O(n/2)
    end--;
    int l = (end - start)/2;
    for(int i = 0 ; i<l ; i++){
        int temp= arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
}

int main(){
    vector <int> arr = {1,2,3,4,5,6,7};
    int k;
    // cin >> k;
    k=4;

    // rotate2(arr,k);
    reverseArr(arr,0,7);
    for(auto it : arr){
        cout << it << " ";
    }
    return 0;
}