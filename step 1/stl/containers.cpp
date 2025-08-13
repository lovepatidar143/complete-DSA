// #include <bits/stdc++.h>  /// Includes all standard C++ libraries (not recommended for production)
#include <iostream>
// #include<vector>
#include<list>
#include<deque>
#include<stack>
#include <queue>
#include <set>

using namespace std;


void pairs(){
    pair<int , int> p ;
    p = {1,2};
    cout << "this is my first pair with two elements "<<endl;
    cout << p.first << p.second<<endl;

    pair <int , pair<int , string >> name ;
    name = {1, {2, "love"}};

    cout<< "this is my sedcond pair"<<endl;
    cout << name.first << name.second.first << name.second.second<<endl;

    cout << "now i gonna type some pair array\n";

    pair <int , string> arr[5] = {{1,"love"} , {2,"nainsi"} , {3, "garima"} , {4,"bhumika"} , {5, "lakshita"}};
    //the sizeof five the no of bytes so to get the lenge 
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i =0 ; i< length ; i++){
        cout << "roll:-" << arr[i].first << " name :-" << arr[i].second<<endl;
    }
}



void vectors(){
    vector < int> v ;
    v.emplace_back(11);
    v.emplace_back(12);
    v.emplace_back(13);
    v.push_back(14);
    vector <pair<int , int >> vp;
    vp.emplace_back(1,2);
    vp.emplace_back(1,3);
    vp.emplace_back(1,4);
    vp.push_back({3,5});


    // for(int i =0 ; i<vp.size() ; i++ ){
    //     cout << "the elemts is ";
    //     cout << vp[i].first << " and "  << vp[i].second << endl;

    // }
    // for(int i =0 ; i<v.size() ; i++ ){
    //     cout << "the elemts is ";
    //     cout << v[i] << endl;

    // }
    vector <int > v1(3,100);
    // cout << v1[2] <<endl;

    vector <int > v2(v);
    // cout << v[1];
    //v= {11,12,13,14}

    vector <int> :: iterator it =v.begin();

    for ( auto it = v.begin() ; it < v.end() ; it++){
        // cout << *(it) << endl;
    }
    
    for (auto it = --v.end(); it >= v.begin() ;it-- ){
        // cout << *(it) << endl;

    }
    //for covering elements to elemtes like the vest way i have ever n seeen ihn y life 
    cout << "before erasing :  " << endl << "{"; 
    for (auto it : v ){
        cout << ","<< it;
    }
    cout << "}\n";
    // v.erase(v.begin());
    // v.erase(v.begin() , v.begin()+2);

    //insertion 

    v.insert(v.begin()+1 , 3, 5);
    vector <int> copy(3,50);
    v.insert(v.end() , copy.begin(), copy.end());

    cout << "after erasing " <<endl  << "{"; 
    for (auto it : v ){
        cout << ","<< it;
    }
    cout << "}\n";

    cout << "some basic operation \n";

    cout << v.size();
    cout <<endl;
    v.pop_back();
    for (auto it : v ){
        cout << ","<< it;
    }
    cout <<endl;
    v.swap(copy);
    for (auto it : v ){
        cout << ","<< it;
    }
    cout <<endl;
    cout << v.empty() << endl;
    
    v.clear();
    v.push_back(8);
    for (auto it : v ){
        cout << ","<< it;
    }


    

}


void lists(){
    list<int> ls;
    ls.push_back(8);
    ls.emplace_back(9);

    ls.push_front(7);
    ls.emplace_front(6);

    for (auto it : ls){
        cout << it << ' ';
    }

    //rest all function are same s vector 
    // begin end rbeign rend clear insetty size swap

}

void deques(){
    deque <int> d;
    d.push_back(5);
    d.emplace_back(4);

    d.push_front(3);
    d.emplace_front(2);

   

    d.pop_back();
    d.pop_front();
    cout << "\n after delertin fomr front and back \n";
     for (auto it : d){
        cout << it << " ";
    }

    // begin end rbegin rend clear insert sixe sqap all are sme in the deque is same sa follow s 
}

void stacks(){
    // lifo last in first out 
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(4);


    cout << st.top();
    st.pop();
    cout << endl << st.top() << endl;
    st.pop();
    cout << st.top();
    st.emplace(5);
    st.emplace(6);
    st.emplace(7);
    cout << st.size();
    cout << st.empty();
    
    stack <int> st2; 
    st.swap(st2);
    st.push(1);
    cout << endl << "some another operation ";
    cout << st.top() << endl;
    cout << st2.top();
    st.swap(st2);




    //now how to traverse through the stack without distroing it ;

    // You cannot iterate through stack directly using for-each loop, because stack is an adapter (no iterator support)
    // To access each element, create a copy and use while loop with .top() and .pop()
    stack <int> temp(st);
    cout << endl << "accesing the ecery single elemet of the stack" <<endl;
    // cout << temp.top();

    while (temp.size()){
        cout << temp.top() << " ";
        temp.pop();

    }
    cout << st.top();




    ///\ so you can use stacks queue and priority_queue in the similar fasion like other contianers beacuse these are not containeres these are the wrapper on the container know as adapter this restrict the some function like iteraiting and direxct acces
}



// Queue implimantion 

void queues(){
    // first in first out (FIFO)
    queue <int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.emplace(16);

    q.back() += 1;

    cout << q.back() <<endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.back() <<endl;
    cout << q.front() << endl;
    cout << q.size() << endl ; 
    cout << q.empty() << endl ;

}


void priority_queues(){
    priority_queue <int> pq;
    pq.push(1);
    pq.push(13);
    pq.push(4);
    pq.push(10);
    pq.push(3);
    pq.emplace(23);


    cout << pq.top() <<endl;
    // Cannot use for-loop directly with pq.size() as it changes during pops. Use while loop instead.

    // for (int i =0 ; i< pq.size() ; i++ ){
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    cout << endl << pq.size() << endl ;
    while (pq.size()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl << pq.size() << endl ;
    
    cout << "Min-heap: reverse of default priority_queue (which is max-heap)" << endl;

    priority_queue < int ,vector <int>  , greater<int> > inc;
    inc.push(1);
    inc.push(11);
    inc.push(2);
    inc.push(67);
    inc.push(13);
    // push emplace top pop all are sare here
    while (inc.size()){
        cout << inc.top() << " ";
        inc.pop();
    }

}
void sets(){
    // insert emplace find erase cout erase.start and end lowerbound and upper bound 
    //find swape empty all funcotn of vectores are same 

    set <int> st;
    st.insert(1);
    st.insert(4);
    st.insert(5);
    st.insert(11);
    st.insert(5);
    st.emplace(5);
    st.insert(25);
    st.emplace(15);

    set <int> :: iterator it = st.find(5);
    cout << *(++it) << endl;

    // auto it2 = st.find(101);

    // cout << *(--it2) << endl;

    for (auto it : st){
        cout << it << " ";
    }
    st.erase(5);
    cout << st.count(5);
  for (auto it : st){
        cout << it << " ";
    }
    // erase(st.begin() , st.begin()+1);
    auto it1 = st.find(4);
    auto it2 = st.find(15);
    st.erase(it1, it2);  // Erases 20, 30, 40 (does not erase 50)
    cout << endl;
      for (auto it : st){
        cout << it << " ";
    }
}

int main() {
    // pairs();

    // vectors();

    // lists();
    // deques();

    // stacks();

    // queues();

    // priority_queues();

    //sorted and unique sets
    sets();

}