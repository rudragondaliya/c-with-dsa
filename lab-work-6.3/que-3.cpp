#include<iostream>
using namespace std;

int main(){

    int i,n,res;

    cout<<"enter the number:";
    cin>>n;

    for(i=1;i<=10;i++){
        res = n*i;
        
    cout<<n<<" x "<< i <<" : "<<res<<endl;
    }

    return 0;

}