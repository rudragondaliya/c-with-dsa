#include<iostream>
using namespace std;

int main(){

    int n1,n2;

    cout<<"enter the first year :";
    cin>>n1;
    cout<<"enter the second year :";
    cin>>n2;

    while(n1<=n2){
        if(n1%4==0){
            cout<<n1<<endl;
        }

        n1++;
        
    }

    


}