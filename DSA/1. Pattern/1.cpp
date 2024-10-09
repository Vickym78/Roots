#include<bits/stdc++.h>
using namespace std;

// sq number pattern
int main(){
    for(int i =0;i<4;i++){
        for(int j =1;j<=4;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
     cout<<endl<<"---charcters---"<<endl;
    // now for character
    for(int i =1;i<=4;i++){
        char ch = 'A';
        for(int j =0;j<4;j++){
            cout<<char(ch+j)<<" ";

        }
        cout<<endl;
    }


    cout<<endl<<"--continous number--"<<endl;
    int a = 1;
    for(int i =0;i<3;i++){
        for(int  j  =0;j<3;j++){
        cout<<a<<" ";
        a++;
        }
        cout<<endl;
    }

    /*
    
   Expected output

1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4

---charcters---
A B C D
A B C D
A B C D
A B C D

--continous number--
1 2 3
4 5 6
7 8 9
    
    
    */
    
}