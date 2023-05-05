#include<bits/stdc++.h>
using namespace std;

// Iterative Approach
int bSearch(int arr[],int n,int x){
    int low = 0, high =n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>x)
        high=mid-1;
        else if (arr[mid] < x)
        low=mid+1;
        else{
            if(mid==n-1 || arr[mid+1] != arr [mid])
            return mid;
            else
            low = mid+1; 
        }
    }
    return -1;
}

int main()
    {
        int arr[] = {5, 7, 7, 7, 9, 13};
        cout << bSearch(arr, 6, 7);
        return 0;
    }