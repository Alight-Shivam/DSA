#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<string> s;
    s.push("Shivam");
    s.push("Middha");
    s.push("Alight");

    cout<<"Top Element-->"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element--> "<<s.top()<<endl;
    cout << "size of stack"<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;
    
}