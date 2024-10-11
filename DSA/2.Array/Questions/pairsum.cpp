#include<bits/stdc++.h>
using namespace std;

void bruteforce(vector<int>&arr  ,int target){

    cout<<"from brute force"<<endl;
    for(int i =0;i<arr.size();i++){
        for(int j = i +1 ; j<arr.size();j++){
            if(arr[i]+arr[j] ==target) cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}

void better(vector<int>&v, int target){
    sort(v.begin(),v.end());
    cout<<"from better"<<endl;
    int lo = 0 , hi = v.size()-1; 
    while(lo<hi){
        int sum = v[lo] + v[hi];
        if( sum== target){
            cout<<v[lo]<<" "<<v[hi]<<endl;
            lo++; hi--;
        }
       else if(sum>target) hi--;
       else lo++;
        
    }
}

int main(){
    int n ; cin>>n ; 
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int target; cin>>target;
    bruteforce(arr,target);
    better(arr,target);
}