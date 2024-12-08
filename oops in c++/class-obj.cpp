#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll_no;
    string grade;
};


int main(){

    Student S1;

    S1.name = "rudra";
    S1.age = 19;
    S1.roll_no = 12;
    S1.grade = "A+";

    cout<<S1.name<<" "<<S1.age<<" "<<S1.roll_no<<" "<<S1.grade<<" ";
}

