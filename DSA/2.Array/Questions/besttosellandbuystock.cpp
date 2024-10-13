#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n ; 
    vector<int>arr(n);

    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }

    // logic for code
    int  maxi = 0;
    for(int i =0;i<n-1;i++){
        int profit = 0 ;
            for(int j = i+i;j<n;j++){
                profit = arr[j]-arr[i];
                maxi = max(profit , maxi);
            }
    }
    cout<<maxi;
}