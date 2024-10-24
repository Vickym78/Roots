#include<bits/stdc++.h>
using namespace std;

class student{
    public:  // mandatory to make it public default considers as Private
    string name;
    int age,roll;
    string grade;

};

int main(){
// student class is now data type using by making it object

student s;
s.name="Vicky";
s.age=19;
s.grade="O";
s.roll=1044;

cout<<s.name<<" "<<s.age<<" "<<s.roll<<" "<<s.grade;


}