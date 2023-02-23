#include<bits/stdc++.h>
using namespace std;

// Time Complexity is theta(n)

void printFreq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] + " " + freq;
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] + " " + 1;
    }
}

int main(){
    int arr[] = {1, 1, 5, 6, 8, 8, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printFreq(arr,n);
    return 0;
}