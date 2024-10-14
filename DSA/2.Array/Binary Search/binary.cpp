#include<bits/stdc++.h>
using namespace std;

void binarysearch(vector<int>&v , int x ){
    int lo = 0 , hi = v.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid] == x){ cout<<"element founded "<< x ; break; }
        else if(v[mid]<x) lo = mid + 1;
        else hi = mid - 1 ;
    }

}

int main(){
    int n ; cin>>n; 
    vector<int>arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    int target ; cin>>target; // consider target always exist

    binarysearch(arr , target);
}