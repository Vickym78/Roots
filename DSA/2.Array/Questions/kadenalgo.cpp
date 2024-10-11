#include<bits/stdc++.h>
using namespace std;

void bruteforce(vector<int> &arr){
    int  msum = arr[0];
    for(int i = 0;i<arr.size();i++){
        int sum = 0 ;
        for(int  j =i;j<arr.size();j++){
            sum+=arr[j];
            msum= max(sum,msum);

        }
    }

    cout<<msum<<endl;
}

void kadenalgo(vector<int> &v){
    int sum = v[0], msum = sum;
    for(int i = 1 ;i<v.size();i++){
        sum+=v[i];
        msum = max(sum,msum);
        if(sum<0){
            sum = 0;
        }
    }
    cout<<msum<<endl;
}

int main(){
    int n ; cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    bruteforce(arr);
    kadenalgo(arr);
    
}