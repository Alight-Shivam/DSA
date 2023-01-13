#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 0; i * i <= n; i++)
    //  We will check only till sqrt of n as it will help in checking the min factor of number. Time complexity is also O(sqrt(n))
    {
        if (n % i == 0)
            return false;

        return true;
    }
}

void primeFactors(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            {
                int x = i;
                while (n % x == 0)
                {
                    cout << i;
                    x = x * i;
                }
            }
        }
    }
}

// Efficient Solution

void printPrimeFactors(int n){
    if(n <= 1)
    return;

    for (int i = 2; i*i < n; i++)
    {
        while(n%i == 0){
            cout << i;
            n = n/i;
        }
    }
       if(n>1)
       cout << n;
}