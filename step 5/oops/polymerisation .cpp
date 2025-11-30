#include <iostream> 
using namespace std ; 
 
class car{
    public : 
    void sound(){
        cout << "i am goid to make sound " << endl ;
    }
};

class mustang : public car {
    public : 
    void sound(){
        cout << "rat rat rataaa " << endl ; 
    }
};

int main(){
    mustang m ; 
    m.sound();
    car c ; 
    c.sound();

    return 0 ;
}