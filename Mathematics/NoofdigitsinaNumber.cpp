#include<bits/stdc++.h>
using namespace std;

// ITERATIVE SOLUTION

int countDigit(long n){   // Theta(d) time complexity
    int count = 0;
    while( n!= 0){
        n = n/10;
        count++;
    }
    return count;
}

// RECURSIVE SOLUTION

int countDigit(long n){
    if (n==0)
    return 0;
    return 1 + countDigit(n/10);
}

// LOGARITHMIC SOLUTION

int countdigit(long n){
    return floor(log10(n)+1);
}

int main(){
    int n;
    cin >> n;
    cout << countDigit(n) <<endl;
    return 0;
}