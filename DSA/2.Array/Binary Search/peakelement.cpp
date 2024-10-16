#include<bits/stdc++.h>
using namespace std;

void bylinears(vector<int> &arr){
    if(arr.size()<3) cout<<"not exist";
   for(int i = 1 ;i<arr.size()-1;i++){
    if(arr[i] >arr[i-1] && arr[i] > arr[i+1]){
        cout<<arr[i]<<" ";
    }
   }
    

}

int main(){
        vector<int>arr = {0,3,8,9,5,2};

        bylinears(arr);
}