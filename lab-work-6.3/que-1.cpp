#include<iostream>
using namespace std;

int main(){

    int i,n,sum=0;

    cout<<"enter the value of n:";
    cin>>n;

    for(i=1;i<=n;i++){
        sum+=i;
    }

    cout<<"sum of all the numbers is:"<<sum;
    return 0;
}