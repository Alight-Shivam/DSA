#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

// Time Complexity is O(min(a,b))

// Optimised Solution
int gcD(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcD(b, a % b);
}

// Time Complexity is O(log(min(a,b)))
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcD(a, b);
    return 0;
}