#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    
    cout<<"enter the value of a:";
    cin>>a;

    cout<<"enter the value of b:";
    cin>>b;

    cout<<"enter the value of c:";
    cin>>c;

    (a<b) ? (a<c) ? cout<<a : cout<<b : (b<c) ? cout<<b : cout<<c;

    return 0;
}