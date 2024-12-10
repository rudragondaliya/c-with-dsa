#include<iostream>
using namespace std;

int division(int d){
    if(d % 3 == 0 && d % 5 == 0){
        cout<<"it is divisible by 3 and 5"<<endl;
    }
    else{
        cout<<"it is not divisible by 3 and 5"<<endl;
    }
}

int main(){

    int d1;
    cout<<"enter the number:";
    cin>>d1;
    division(d1);
}