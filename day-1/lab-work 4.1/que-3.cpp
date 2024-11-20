#include<iostream>
using namespace std;

int main(){

    int x,y,cube;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;

    cube = (x+y) * (x+y) * (x+y);

    cout<<"the cube of (x+y)^3:"<<cube<<endl;
}