#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter any number:";
    cin>>num;
    
    if(num<0){

        cout<<"the number is negative"<<endl;
    }
    else if(num==0){
        cout<<"the number is neutral"<<endl;
    
    }
    else{
        
        cout<<"the number is positive"<<endl;
    }
}