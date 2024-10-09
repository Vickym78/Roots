#include<bits/stdc++.h>
using namespace std;


int main(){
    for(int i=0;i<4;i++){
        for(int j =0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    // numbers
    cout<<endl;
    cout<<"for numbers"<<endl;
    for(int i =1;i<=4;i++){
        for(int j =1; j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"continue numers";
    cout<<endl;
 for(int i =1;i<=4;i++){
        for(int j =1; j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

cout<<endl;
    cout<<"reverse continue numers";
    cout<<endl;
 for(int i =1;i<=4;i++){
        for(int j =i; j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}