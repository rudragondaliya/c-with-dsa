#include<iostream>
using namespace std;

int main(){

    char str[100];
    int i;

    cout<<"enter a string:";
    cin>>str;

    for(i=0;str[i]!='\0';i++){
       if(str[i]>='a' && str[i]<='z'){
        str[i] = str[i] - 32;
       }
    }

    cout<<"uppercase string: "<<str<<endl;
}