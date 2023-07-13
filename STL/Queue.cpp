#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<string> q;
    q.push("Shivam");
    q.push("Middha");
    q.push("Alight");
    cout<<"Size before pop"<<q.size()<<endl;
    cout<<"First Element "<<q.front()<<endl;
    q.pop();
    cout<<"First Element "<<q.front()<<endl;
    cout<<"Size after pop "<<q.size()<<endl;
}