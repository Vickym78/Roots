#include<bits/stdc++.h>
using namespace std;

void findsmallmax(int arr[] ,int n ){
    int max  = INT_MIN;
    int min = INT_MAX;
    for(int i = 0 ;i<n ;i++){
        if(arr[i]>max) max =arr[i];
        if(arr[i]<min) min=arr[i];
    }
    cout<<"max: "<<max<<endl<<"min: "<<min;
}

int main(){
    int n; cin>>n;
     int arr[n]; 
     for(int i =0;i<n;i++){
        cin>>arr[i];
     }
     findsmallmax(arr, n);
}