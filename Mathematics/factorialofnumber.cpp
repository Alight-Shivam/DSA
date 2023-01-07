// Iterative Implementation is better
// Time Complexity is Theta(n) and space complexity is O(1)

#include<bits/stdc++.h>
using namespace std;

int res = 1;
int fact(int n){
for (int i = 2; i < n; i++)
{
    res = res * i;
    return res;
}
}


// Recursive Solution
// Assumption >= 0
// Time Complexity is T(n) = T(n-1) + theta(1)
// Auxilary space is theta(n)

int facto(int n){
    if(n == 0){
        return 1;
        return n*facto(n-1);
    }
    }


