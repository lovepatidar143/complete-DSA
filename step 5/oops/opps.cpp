#include <iostream> 
using namespace std ; 

class Human{
    public : 
    string name ; 
    int age ; 
    int income ; 
    float height; 

    //funcitons or methods 

    void tellMe(){
        cout << endl;
        cout << "hii my name is " << name << " and my age is " << age << " wiht income and height of " << income << height  << endl; 

    }
    void hellow();
};

// funciton out side the class with teh scope resoluiton operator ::
void Human::hellow(){
    cout << endl << "i am a class with name " << name << endl;
}
int main(){
    Human h ;
    h.name = "love patidar ";
    h.age = 12 ; 
    h.income = 900000;
    h.height = 6.0;

    h.tellMe();
    h.hellow();

    return 0;
}