#include <bits/stdc++.h>
using namespace std;

// Time Complexity is O(a*b - max(a,b))
int gcd(int a, int b)
{
    int res = max(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
       return res;
       
     res++;
    }
    return res;
}

// int lcm(int a, int b){
//     return((a*b)/gcd(a,b);
// }

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}