#include<iostream>
using namespace std;

class Customer{
     
     string name;
     int acc_no;
     int bal;
     int *roi;

     public:
     //default constructor
     Customer()
     {
        name = "Rudra";
        acc_no = 123;
        bal = 120000;
        roi = new int[100];
     }

// Parameterised constructor
     

     // constructor overloading
     Customer(string a, int b){

        name = a;
        acc_no = b;
        bal =10000;
     }

    //  inline constructor

     inline Customer(string a,int b,int c): name(a),acc_no(b),bal(c){

     }

    // copy constructor
     Customer(Customer &B)
     {
        name = B.name;
        acc_no = B.acc_no;
        bal = B.bal; 
     }

     void display(){

        cout<<name<<" "<<acc_no<<" "<<bal<<endl;
     }

};

int main(){

    Customer A1;
    Customer A2("Rohit",122,32233);
    Customer A3("rihan",1221);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    Customer A5;
    A5 = A3;
    A5.display();
}