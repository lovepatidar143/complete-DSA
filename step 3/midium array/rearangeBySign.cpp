#include <iostream> 
using namespace std; 
void arrange(vector <int> &arr){
    int n = arr.size();
    //case when the no of positive is not eqyat to the negative 

    vector<int> posi;
    vector <int> negi;
    for(auto it: arr){
        if(it<0) negi.push_back(it);
        else posi.push_back(it);
    }

    if(posi.size()<negi.size()){
        for(int i =0 ; i<posi.size() ; i++){
            arr[2*i] = posi[i];
            arr[2*i+1] = negi[i];

        }
        int index = posi.size()*2;
        for(int i = posi.size(); i<negi.size() ; i++){
            arr[index++] = negi[i];
        }
    }else{
        for(int i =0 ; i< negi.size(); i++){
            arr[2*i]=posi[i];
            arr[2*i+1] = negi[i];

        }
        int index = negi.size();
        for(int i = negi.size();i<posi.size();i++){
            arr[index++] = posi[i];
        }
    }

}
int main(){
    return 0;
}