#include <iostream> 
using namespace std ; 
class vhicle{
    public : 
    string brand ;

    private : 
    int price ;
};

class twoWheel : public vhicle{
    public:
    int cc ;
};
int main(){
    twoWheel honda ; 

    honda.brand = "name ";
    honda.cc = 9090 ;
    return 0 ; 
}