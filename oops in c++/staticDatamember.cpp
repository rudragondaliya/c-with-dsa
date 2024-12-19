#include<iostream>
using namespace std;

class Customer 
{
    string name;
    int acc_no,bal;
     static int Total_customer;

    public:
    Customer(string name,int acc_no ,int bal)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->bal = bal;
        Total_customer++;
    }

     void display(){
        cout<<name<<" "<<acc_no<<" "<<bal<<" "<<Total_customer<<endl;
     }

     void display_total()
     {
        cout<<Total_customer<<endl;
     }

};
  
    int Customer::Total_customer=0;

int main(){

    Customer A1("rudra",1,10000);
    Customer A2("rushabh",2,2000);
    A2.display_total();
    Customer A3("rohan",3,10000);
    A2.display_total();
}