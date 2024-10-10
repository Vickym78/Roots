#include<bits/stdc++.h>
using namespace std;

void uniquefind(vector<int> &arr){
    int n  = arr.size();
    unordered_map<int,int>mpp;
    for(int i = 0 ;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second ==1) cout<<it.first;
    }
    cout<<endl;

}

void bitwisemethod(vector<int> &arr){
    int n  = arr.size();
   int ans = 0 ;
    for(int i = 0 ;i<n;i++){
        ans^=arr[i];
    }
  cout<<ans;

}

int main(){
    int n ; cin>>n;
    vector<int>v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }

    uniquefind(v);
    bitwisemethod(v);
}