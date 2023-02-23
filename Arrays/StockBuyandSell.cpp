// #include<bits/stdc++.h>
// using namespace std;

// int maxProfit( int price[], int n){
//     int profit = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (price[i] > price[i-1])  
//         {
//             profit += (price[i] - price[i-1]);
//         }
     
//     }
//      return profit;  
// }

// int main(){
//     int price[] = {2, 7, 4, 1, 8, 9};
//     int n = sizeof(price)/sizeof(price[0]);
//     cout << maxProfit(price,n);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int maxProfit( int price[], int n){
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (price[i] > price[i-1])  
        {
            profit += (price[i] - price[i-1]);
        }
     
    }
     return profit;  
}

int main(){
    // int t;
    // cin >> t;
    // while(t--){
    int n;
    cin >> n;
    int price[n];
    for(int i;i<n;i++){
        cin>>price[i];
    }
    
    cout << maxProfit(price,n);
    return 0;
    }
//}