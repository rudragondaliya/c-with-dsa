#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"enter the value of first number:";
    cin>>a;
    cout<<"enter the value of second number:";
    cin>>b;

    if(a<b){
        cout<<"the minimum value is:"<<a<<endl;
    }
    else{
        cout<<"the minimum value is:"<<b<<endl;
    }
}