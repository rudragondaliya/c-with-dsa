#include<iostream>
using namespace std;

int main(){

    int n,i=1;

    cout<<"enter the n value:";
    cin>>n;

    do
    {
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;
    } while (i<=n);
    
}