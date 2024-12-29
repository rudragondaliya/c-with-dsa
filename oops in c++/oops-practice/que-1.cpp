#include<iostream>
using namespace std;

class Customer{

    string name;
    int acc_no;
    int bal;

    public:
    Customer(string name,int acc_no,int bal)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->bal = bal;
     
    }

    void display(){
        
        cout<<name<<" "<<acc_no<<" "<<bal<<endl;
    }

    void deposit(int amt)
    {
        if(amt>0){
            bal+=amt;
        }
    }

    void withdraw(int amt)
    {
        if(amt<=bal && amt>0)
        {
            bal-=amt;
        }
    }

    bool transfunds(int amt , Customer &targetAccount)
    {
       if(amt<=0) {
          cout<<"transfer amount must be positive."<<endl;
          return false;
       }

       if(amt>bal){
        cout<<"insufficient balance for the transfer."<<endl;
        return false;
       }

       bal-=amt;
       targetAccount.bal+=amt;
       cout<<"Transfer Successful:"<<amt<<"transfered to amount " << targetAccount.acc_no<<endl;
       return true;

    }
   

};

int main(){

    Customer C1("rudra",12,12000);
    Customer C2("rohit",6,13000);

    cout<<"\nAttempting to transfer Rs.200 from rudra to rohit..."<<endl;
    C1.transfunds(200,C2);

    cout << "\nBalances after Transfer:" << endl;
    C1.display();
    C2.display();


    return 0;
  
}