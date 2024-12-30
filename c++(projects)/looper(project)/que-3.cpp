#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3,sum;
    cout<<"Enter the number:";
    cin>>n1;

    n3 = n1 % 10;

    while(n1>10)
    {
        n1/=10;
    }
    n2=n1;
    sum = n2 + n3;

    cout<<"the sum of firstdigit and lastdigit is:"<<sum<<endl;
}