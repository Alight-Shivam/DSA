#include<bits/stdc++.h>
using namespace std;

// theta(n) - Time Complexity
// Theta(1) - Auxillary space

void printDivisors(int n){
    for (int i = 1; i < n ; i++)
    {
        if(n%i == 0){
            cout << i;
        }
    }
}

// Efficient Solution

void PrintDivisors(int n){
 for (int i =1; i*i <= n; i++)
 {
    if(n%i == 0){
        cout << i;
        if(i != n/i){
            cout << n/i;
        }
    }
 }
}

// Optimised solution

void printDIvisors(int n){
    int i;
    for (int i = 1; i*i < n; i++){
        if(n%i==0){
            cout << i;
        }
    for ( ; i >= 1 ; i--){
        if(n%i == 0){
            cout << n/i;
        }
    }
    }
}
int main(){
    int a;
    cin >> a;
    printDivisors(a);
    return 0;
}