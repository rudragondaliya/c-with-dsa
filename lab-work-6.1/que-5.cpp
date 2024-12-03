#include<iostream>
using namespace std;


int main(){

int n1,n2,i;

cout<<"Enter the first value of n1:";
cin>>n1;

cout<<"enter the second value of n2:";
cin>>n2;

while(n1<=n2){

    if((n1%4==0 && n1%100!=0) || (n1%400==0)){
        cout<<n1<<endl;
    }
    n1++;
}

 cout<<endl;
 return 0;

}