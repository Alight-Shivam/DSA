#include<bits/stdc++.h>
using namespace std;

void fun1(int n){
    if(n==0)
    return;
    cout << "Alight learning Recursion" << endl;
fun1(n-1);
}

int main(){
    fun1(2);
    return 0;
}