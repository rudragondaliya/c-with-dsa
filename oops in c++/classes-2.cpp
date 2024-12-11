#include<iostream>
using namespace std;

class Employee {
    public:
    int id;
    string name;
    float salary;
    void insert(int i,string n,float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void display(){

        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};

int main(void){
    Employee e1;
    Employee e2;
    e1.insert(101,"rudra",10000);
    e2.insert(102,"rohan",20000);
    e1.display();
    e2.display();

    return 0;
}