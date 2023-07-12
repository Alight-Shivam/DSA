#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;

    list<int> n(5,100);
    for(int i:n){
    cout<<i<<" ";
}
    // list<int> n(l);   // copying the list
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout <<i<<" ";
    }
cout<<endl;
l.erase(l.begin());
cout<<"After erase"<<endl;
for(int i:l){
    cout<<i<<" ";
}
cout<<"size of list"<<l.size()<<endl;
}

// These functions are made possible here beacuse of Doubly linked list