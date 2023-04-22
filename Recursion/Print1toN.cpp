#include<bits/stdc++.h>
using namespace std;

void print1toN(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    print1toN(n - 1);
}

int main()
{
    int n = 4;
    print1toN(n);
    return 0;
}