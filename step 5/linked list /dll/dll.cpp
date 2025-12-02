#include <iostream> 
using namespace std ; 
class Node {
    public : 
    int data ; 
    Node * prev ; 
    Node * next ; 

    Node (int value ){
        this -> data = value ; 
        this -> prev = nullptr ; 
        this -> next = nullptr ; 

    }
};


int main(){
    Node * head = new Node(10) ; 
    head -> next = new Node(20);
    head -> next -> prev = head ; 

    return 0 ;
}