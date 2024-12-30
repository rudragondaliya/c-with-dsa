#include<iostream>
using namespace std;

int main(){

    int n1,n2=0;
    cout<<"Enter the number:";
    cin>>n1;

    while(n1!=0)
    {
        n1 = n1/10;
        n2++;
    }

    cout<<"Total number of digit:"<<n2<<endl;
}