#include<iostream>
using namespace std;

int main(){

    int i,n, first = 0, second = 1,res;

    cout<<"enter the value of n:";
    cin>>n;

    cout<<first<<" "<<second<<" ";

    for(i=1;i<=n;i++){

        res = first + second;
        cout<<res<<" ";

        first = second;
        second = res;
    }

    return 0;
}