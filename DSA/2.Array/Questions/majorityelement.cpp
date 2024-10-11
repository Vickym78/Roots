#include<bits/stdc++.h>
using namespace std;

void  methodx(vector<int>  arr){
    int n = arr.size();
    unordered_map<int,int>mpp;
    for(int i =0;i<n;i++){
        mpp[arr[i]]++;
    }

    int x = n/2;
    for(auto it : mpp){
        if(it.second>x) cout<<it.first;
    }

}

void votingalgo(vector<int> &arr){
    int freq =0 , ans =0;
    for(int i = 0 ; i<arr.size();i++){
        if(freq==0) ans=arr[i];
        if(ans==arr[i]) freq++;
        else freq--;
    }

    cout<<ans;
}

int main(){
    int n ; cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

   methodx(arr);
   votingalgo(arr);
    
}