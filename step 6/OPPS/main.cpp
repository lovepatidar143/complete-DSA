#include <iostream>
using namespace std; 
#include "love.cpp"
class person{
    private : 
    int income ; 

    public: 
    string name ; 
    int age ; 


    int getIncome(){
        return this->income ;

    }

    void setIncome(int x){
        this->income = x;
    }

};


int main(){

    person p ; 
    person *h = new person; 

    p.name = "love" ;
    p.age = 34; 
    // p.income = 100000000000;

    p.setIncome(100000000);
    cout << "name age and indome is "  << p.name << p.age << " " << p.getIncome();



    //for outer decleated class of name love 
    /*
    love p1;
    love *h = new love;
    cout << "name " << p1.name << " age " << p1.age  << endl;

    cout << "name is " <<  h->name << "  age is "  << h->age  << endl; 
    return 0;
    */
}