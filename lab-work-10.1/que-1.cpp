#include<iostream>
using namespace std;


int cube(int c){
    int cube;
    cube = c*c*c;
    cout<<cube<<endl;
}


int main(){

    int n1;
    cout<<"enter the cube:";
    cin>>n1;
    cube(n1);
}