#include<iostream>
using namespace std;

class Human{
    
    string religion,color;
    public:
    string name;
    int age , weight;

};

class Student: protected Human
{
    private:
    int roll_no,fees;

    public:
    
    Student(string n,int age,int weight,int roll_no,int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll_no<<" "<<fees<<endl;
    }
    
    class Teacher: public Human
    {
        int salary,id;
    }
};

int main(){

    Student A("rudra",19,89,12,100000);
    A.display();
    Teacher B;
    B.name = "rohan";

    
}