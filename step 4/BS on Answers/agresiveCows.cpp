#include <iostream>
using namespace std;
int ans(vector <int> &stall , int cow){
    sort(stall.begin(),stall.end());

    int n = stall.size();
    int low =1 , high = stall[n-1] - stall[0];
    int ans = -1 ;

    while(low<=high){
        int mid = (low+high)/2;
        int c =1;
        int cc = 0;

        // checkin is it possible to place cows or not 
        for(int i = 1 ; i<n ; i++){
            if((stall[i]-stall[cc])>=mid){
                cc = i;
                c++;
                
            }

        }
        if(c>=cow){

            low = mid +1 ;

        }else{
            high = mid -1 ;

        }
    }
    return high;
}
int main(){
    int cow = 4 ; 
    vector <int> stall = {0,3,4,7,11,9}; 
    cout << ans(stall,cow) << endl;
    return 0;
}