#include<iostream>
using namespace std;

int main(){

    string email = "rudra61@gmail.com";
    string password = "rudra612005";
    string user;
    string pass;

    cout<<"EWnter your email:"<<endl;
    cin>>user;

    cout<<"Enter your password:"<<endl;
    cin>>pass;

    if(user == email && pass == password){
        cout<<"successful login!..";
    }
    else{
        cout<<"incorrect email or password"<<endl;
    }
   

}