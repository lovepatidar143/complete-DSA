#include <iostream>
using namespace std;

vector<vector<int>> uni(vector <int> a , vector <int> b){
    vector <int> u;
    vector <int> inte; // here the intersection oly contyain uniwue elements i does not contain yhe no which is apear multiple times in the both the arrays
    
    int i =0;
    int j =0;
    int al = a.size();
    int bl = b.size();

    while(i<al && j < bl){
        while(a[i-1]==a[i] && i!=0) i++;
        while(b[j-1]==b[j] && j!=0) j++;

        if(a[i]<b[j]){
            u.emplace_back(a[i]);
            i++;

        }
        else if(a[i]==b[j]){
            u.emplace_back(a[i]);
            inte.emplace_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[i]){
            u.emplace_back(b[j]);
            j++;

        }
    }
    while(i<al){
        while(a[i-1]==a[i] && i!=0) i++;
        u.emplace_back(a[i]);
        
    }
    while (j<bl)
    {
        /* code */
        while(b[j-1]==b[j] && j!=0) j++;
        u.emplace_back(b[j]);
    }
    return {u,inte};
    
    
}
int main(){
    vector <int> a= {1,1,2,3,4,5,6,8,9};
    vector <int> b = {2,3,4,4,5,9};

    vector <vector <int> > res = uni(a,b);
    for(auto it:res){
        for(auto el : it){
            cout << el << " ";
        }
        cout << "\n";
    }
    return 0;
}