#include<bits/stdc++.h>
using namespace std;

void reversed(int arr[] , int n ){
    int  i = 0  ,j = n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;j--;
    }

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }

    reversed(arr , n);
}