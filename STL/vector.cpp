#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    vector<int> a(5,1);

    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    v.push_back(1);
    v.push_back(44);
    v.push_back(47);
    cout<<"Capacity--> "<<v.capacity()<<endl;
    cout<<"Size--> "<<v.size()<<endl;
    cout<<"Element at 2nd Index"<<v.at(2)<<endl;
    
cout << "front "<<v.front()<<endl;
cout << "back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout << endl;

    v.pop_back();
cout<<"after pop"<<endl;
for(int i:v){
    cout <<i<<" ";
}
}