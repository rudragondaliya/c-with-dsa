// static member functiom

#include<iostream>
using namespace std;

class Customer {
    
  
    string name;
    int acc_no,bal,age;
  
    public:
       
    Customer(string name,int acc_no,int bal,int age){

        this->name = name;
        this->acc_no = acc_no;
        this->bal = bal;
        this->age = age;
       
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<bal<<" "<<age<<endl;
    }


   void updateage(int age){

    if(age>0 && age<=100){
        this->age = age;
    }
    else{
        cout<<"inavalid age"<<endl;
    }
   }
   

    void deposit(int amt){
        if(amt>0){
            bal+=amt;
         
        }
        else{
            cout<<"invalid Amount"<<endl;
        }
    }

    void withdraw(int amt){
        if(amt<=bal && amt>0){
            bal-=amt;
          
        }
    }

 
};

 

int main(){

    Customer A1("rohit",1,1000,3);
    Customer A2("rohan",2,19000,5);
    Customer A3("rushabh",3,1000,6);
    A1.updateage(-24);
    A1.display();


  
    


}