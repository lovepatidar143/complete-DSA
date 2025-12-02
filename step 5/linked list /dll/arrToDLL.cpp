#include <iostream> 
using namespace std ; 
class Node {
    public : 
    int data ; 
    Node * prev ; 
    Node * next ; 

    Node (int x ){
        data = x ; 
        prev = nullptr ; 
        next = nullptr;
    }
};
vector <Node *>  ListToDLL(vector <int> &arr){
    Node * head = new Node(arr[0]);
    Node * cur = head ; 
    int n = arr.size();
    for(int i =1 ; i < n ; i++){
        // Node *temp =
        cur -> next = new Node(arr[i]);
        cur -> next -> prev = cur ; 
        cur = cur -> next ;
    }
    return {head , cur } ;

}


void displayForword(Node * head ){
    Node * cur = head ; 
    while (cur != nullptr ){
        cout << cur -> data ; 
        if (cur -> next != nullptr) cout << " <-> " ; 
        cur = cur -> next ; 
    }
    cout << endl; 
}
void displaybackword(Node * tail ){
    Node * cur = tail ; 
    while (cur != nullptr ){
        cout << cur -> data ; 
        if (cur -> prev != nullptr) cout << " <-> " ; 
        cur = cur -> prev ; 
    }
    cout << endl; 
}

Node * deleteHead(Node * head ){
    if (head == nullptr  || head -> next == nullptr ) return head ; 
    Node * temp = head ;
    head = head -> next ; 
    head -> prev = nullptr;
    delete temp ;
    return head ; 
}

Node * deleteTail(Node * tail ){
    if(tail == nullptr || tail -> prev == nullptr) return tail ; 
    Node * temp = tail;
    tail = tail -> prev;
    tail -> next = nullptr;
    delete temp; 

    return tail ;
}

//delete kth element 
Node * deleteK(Node * head , int k ){
    if(k == 1 ) {
        if(head == nullptr || head -> next == nullptr) return head ;
        Node * temp = head ; 
        head = head -> next ; 
        head -> prev = nullptr ; 
        delete temp ;
        return head;
        
    }

    Node * cur = head ; 
    for(int i =1 ; i< k-1 && cur != nullptr ; i++){
        cur = cur -> next ; 
    }

    Node * temp = cur -> next ;
    if(temp -> next == nullptr ){
        cur -> next = nullptr ;
        delete temp;
        return head ;
    }
    cur -> next = temp ->next ; 
    temp -> next ->  prev = temp -> prev ;
    delete temp ;
    return head ; 
}
int main(){
    vector <int> arr = {1,2,3,4,5,6,7,8,9};
    vector <Node *> dll = ListToDLL(arr);
    Node * head = dll[0];
    Node * tail = dll[1];
    // Node * tail = ListToDLLTail(arr);
    displayForword(head);
    displaybackword(tail);
    // head = deleteHead(head );
    // displayForword(head);
    // displaybackword(tail);
    // tail = deleteTail(tail );
    // displayForword(head);
    // displaybackword(tail);
    int k = 9; 
    head = deleteK(head , k );
    displayForword(head);
    // displaybackword(tail);
    return 0 ;
}