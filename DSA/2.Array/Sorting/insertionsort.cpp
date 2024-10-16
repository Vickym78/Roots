#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={5,4,2,3,1};
    int n = 5;
  // insertion sort
  for(int i  = 1; i <n;i++){
    int curr = arr[i] ; 
     int j = i-1;
     while(j>0 && arr[j]>curr){
        arr[j+1] = arr[j];
        j--;
     }
     arr[j+1] = curr;
  }
for(int i = 0 ; i<n;i++){
            cout<<arr[i]<<" ";
        }

}