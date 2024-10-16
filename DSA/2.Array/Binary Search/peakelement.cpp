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

void binarysearch(vector<int> &arr){
    if(arr.size()<3) cout<<"not exist";
    int lo = 0 , hi = arr.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]> arr[mid-1] && arr[mid]>arr[mid+1]) {cout<<arr[mid]<<" "; break;}

        if(arr[mid] >arr[mid-1]){
            lo = mid+1;
        }
        else hi = mid-1;

    }
}

int main(){
        vector<int>arr = {0,3,8,9,5,2};

        bylinears(arr);
        binarysearch(arr);
}