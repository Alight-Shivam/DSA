#include<bits/stdc++.h>
using namespace std;

// Time Complexity is O(n)
bool uPrime(int n){
    if(n==1)
    return false;

    for (int i = 0; i < n; i++)
    // for (int i = 0; i*i <= n; i++)
    //  We will check only till sqrt of n as it will help in checking the min factor of number. Time complexity is also O(sqrt(n))
    {
        if(n%i == 0)
        return false;

    return true;
    }
    
}

// More Efficient Solution

bool Uprime(int n){
    if(n==1)
    return false;
    if(n==2 || n==3)
    return true;
    if(n%2==0 || n%3==0){
        return false;
        for(int i=5; i*i<=n; i=i+6){
            if(n%i==0 || n%(i+2)== 0){
                return false;
            }
            return true;
        }
    }
}


int main()
{
    int n;
    cin >> n;
    cout << Uprime(n);
    return 0;
}