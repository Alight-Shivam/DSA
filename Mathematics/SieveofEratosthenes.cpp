#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){

}
// Time Complexity is O(sqrt(n)*n)
void printPrimes(int n){
    for (int i = 2 ; i <= n; i++)
    {
        if(isPrime(i)){
            cout << i;
        }
    }
    
}


// Efficient solution

void sieve(int n){
    vector<bool> isPrime(n+1, true);
    for (int i = 0; i*i <= n; i++)
    {
        if(isPrime[i]){
         //   for(int j = i*i; j<=n; j=j+i) Optimised Solution
            for(int j = 2*i; j<=n; j=j+i){
                isPrime[j] = false;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            if(isPrime[i]){
                cout << i << " ";
            }
        } 
    }
}


// Optimised Solution

void sieve(int n){
    vector<bool> isprime(n+1,true);
    for(int i=2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
            for (int j = i*i; j <= n; j++)
            {
                isprime[j] = false;
            } 
        }
    }
}

//  O(nlog(logn))