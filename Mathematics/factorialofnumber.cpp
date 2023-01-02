// Iterative Implementation
// Time Complexity is Theta(n)

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