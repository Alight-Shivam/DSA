#include <bits/stdc++.h>
using namespace std;

int moveToend(int arr[], int n)
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

    return arr[n];
}

int main()
{

    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (arr[j] != 0)
    //             {
    //                 swap(arr[i], arr[j]);
    //             }
    //         }
    //     }
    // }
     for (int i = 0; i < n; i++)
    {
        cout<< moveToend(arr,n)<<" ";
    }
    
    return 0;
}