#include<iostream>
using namespace std;

int main(){

    int i,n,fact=1;

    cout<<"enter the number:";
    cin>>n;

    for(i=1;i<=n;i++){
        fact*=i;
    }

    cout<<"the factorial is: "<<fact;
    return 0;
}