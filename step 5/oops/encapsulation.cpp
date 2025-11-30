#include <iostream>
using namespace std ; 
class Love{
    private :
    int salary ; 
    Love(int z){
        salary = z ;
    }

    //getter and setter must be public 
    public :
    int getSalary(){
        return salary; 
    }
    void setSalary(int z ){
        salary = z;
    }
};
int main(){
    Love l;
    // l.setSalary(9000000);
    // cout << l.getSalary();
    return 0;
}