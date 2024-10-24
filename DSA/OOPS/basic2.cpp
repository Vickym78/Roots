// insert element from inside of class

#include<bits/stdc++.h>
using namespace std;

class student{
     public:
    string name; 
    string age;
    void setname(string n){
        name=n;
    }
};

int main(){
    
    student s; 
    s.setname("Vicky");
    cout<<s.name;
}