#include<iostream>
using namespace std;

int main(){

    int a,b,c,d;

    cout<<"Enter a value in the first Number:";
    cin>>a;

    cout<<"enter a value in the second Number:";
    cin>>b;

    cout<<"enter a value in the third Number:";
    cin>>c;

    cout<<"enter a value in the fourth Number:";
    cin>>d;

    if(a>b){

        if(a>c){

            if(a>d){
                cout<<"the maxi value is: "<<a<<endl;
            }
            else{
                cout<<"the maxi value is: "<<b<<endl;
            }

        }
        else{
            if(c>d){
                cout<<"the maxi value is: "<<c<<endl;
            }
            else{
                cout<<"the maxi value is: "<<d<<endl;
            }
        }
    } else{
        if(b>c){
            if(b>d){
                cout<<"the maxi value is: "<<b<<endl;
            }
            else{
                cout<<"the maxi value is: "<<d<<endl;
            }
        }else{
            if(c>d){
                cout<<"the maxi value is: "<<c<<endl;
            }
            else{
                cout<<"the maxi value is: "<<d<<endl;
            }
        }
    }

    return 0;

}