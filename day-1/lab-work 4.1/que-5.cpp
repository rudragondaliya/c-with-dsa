#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"after swapping numbers"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}