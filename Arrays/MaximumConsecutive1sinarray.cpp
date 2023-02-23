#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes( bool arr[], int n){
    int res = 0;
    int curr;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        curr = 0;
        else{
            curr++;
            res = max(res,curr);
        }
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    bool price[n];
    
    for(int i;i<n;i++){
        cin>>price[i];
    }
    
    cout << maxConsecutiveOnes(price, n);
    return 0;
    }
