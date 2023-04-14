#include<bits/stdc++.h>
using namespace std;

// void fun(int n){
//     if(n==0)
//     return;
//     cout<<n<<endl;
//     fun(n-1);
//     cout << n <<endl;
// }

// void fun(int n){
//     if(n==0)
//     return;
//     fun(n-1);
//     cout<<n<<endl;
//     fun(n-1);
// }

// int fun(int n){
//     if(n==1)
//     return 0;
//     else
//     return 1+fun(n/2); 
// }
//  Floor of log base 2 n will be is solution


// Recursive function for printing binary of of a number

void fun(int n){
    if(n==0)
    return;
    fun(n/2);
    cout << n%2;
}

int main(){
    fun(3);
    return 0;
}