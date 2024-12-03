#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"enter a value of the first number:";
    cin>>a;

    cout<<"enter a value of the second number:";
    cin>>b;

    cout<<"enter a value of the third number:";
    cin>>c;

    if(a<b){
        if(a<c){
            cout<<"the minimum number is: "<<a<<endl;
        }
        else{

            cout<<"the minimum number is:"<<c<<endl;
        }
    }
    else{

        if(b<c){
            cout<<"the minimum number is: "<<b<<endl;
        }
        else{
            cout<<"the minimum number is: x "<<c<<endl;
        }
    }

   

}