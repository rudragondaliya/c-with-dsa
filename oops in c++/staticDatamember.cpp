// static member functiom

#include<iostream>
using namespace std;

class Customer {
    
    string name;
    int acc_no,bal;
    static int total_customer;
    static int total_bal;

    public:
       
    Customer(string name,int acc_no,int bal){

        this->name = name;
        this->acc_no = acc_no;
        this->bal = bal;
        // total_customer++;
        total_bal+=bal;
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<bal<<endl;
    }

    void display_total(){
        // cout<<total_customer<<endl;
        cout<<total_bal<<endl;

    }

    void deposit(int amt){
        if(amt>0){
            bal+=amt;
            total_bal+=amt;
        }
    }

    void withdraw(int amt){
        if(amt<=bal && amt>0){
            bal-=amt;
            total_bal-=amt;
        }
    }

    static void acesstatic(){
        cout<<"total no of customer:"<<total_customer<<endl;
        cout<<"total balance:"<<total_bal<<endl;
    }
};

 int Customer::total_customer = 0;
 int Customer::total_bal = 0;

int main(){

    Customer A1("rohit",1,1000);
    Customer A2("rohan",2,19000);
    Customer A3("rushabh",3,1000);
    A1.deposit(2000);
    A2.withdraw(3000);
    A1.display();
    A2.display();
    // Customer::acesstatic();

  
    


}