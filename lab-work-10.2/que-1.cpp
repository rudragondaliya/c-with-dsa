#include<iostream>
using namespace std;

int arrsum(int a){

    int i,sum;
    cout<<"enter the size:";
    cin>>a;

    int arr[a];

    for(i=0;i<a;i++){

        cout<<"enter the elementd arr[a]"<<i;
        cin>>arr[i];

        sum+= arr[i];

    }

    cout<<sum;

}

int main(){

    int n1;
    arrsum(n1);

    return 0;
}