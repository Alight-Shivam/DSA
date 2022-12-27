#include <bits/stdc++.h>
using namespace std;

void move_zero_to_end(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin >> n; 
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    move_zero_to_end(arr,n);
    return 0;
}
