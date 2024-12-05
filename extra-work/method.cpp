#include<iostream>
using namespace std;

class Employee{

    private:

     int Salary;

     public:
     void setSalary(int s){
        Salary = s;
     }

     int getSalary(){
        return Salary;
     }
};


int main(){

    Employee myObj;

    myObj.getSalary(50000);
    cout<<myObj.getSalary();


    return 0;
    
}
