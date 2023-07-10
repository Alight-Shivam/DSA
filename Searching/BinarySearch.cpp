#include<bits/stdc++.h>
using namespace std;

// Iterative Approach
int bSearch(int arr[],int n,int x){
    int low = 0, high =n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}

// Recursive Approach
int bSearch(int arr[],int n,int x){
    int low = 0, high =n-1, int x;
        if(low>high) return -1; 
        else{
        int mid = (low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        return bSearch(arr, low, mid-1, x);
        else
        return bSearch(arr, mid+1, high, x);
        } 
}

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//  for (int i = 0; i < n; i++)
//     {
//         cout<< bSearch(arr,n)<<" ";
//     }
//     return 0; 
    
// }