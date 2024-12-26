#include<iostream>
using namespace std;


class Human{

    protected:
    string name;
    int age;

    public:
    void work(){
        cout<<"i am working"<<endl;
    }
};

class Student : public Human{

    int roll_no,fees;

    public:
    Student(string name, int age ,int roll_no ,int fees){

        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }
};


int main(){

    Student A1("rudra",19,51,100000);
    A1.work();
}