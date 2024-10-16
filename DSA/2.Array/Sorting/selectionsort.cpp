#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={5,4,2,3,1};
    int n = 5;
    for(int i  = 0 ;i<n;i++){
        int minpos = i ;
        for(int j = i+1 ; j<n;j++){
                if(arr[minpos]>arr[j]){
                        minpos = j ;
                }
        }
        swap(arr[i] ,arr[minpos]);
    }
for(int i = 0 ; i<n;i++){
            cout<<arr[i]<<" ";
        }

}