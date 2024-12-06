#include<iostream>
using namespace std;
#include<string.h>

int main(){

    char password[100],uppercase,lowercase,specialcase,digit;
    int length,i; 

    cout<<"Create Your Password: "<<endl;
    cin>>password;

    length = strlen(password);

    for(i=0;i<length;i++){

        if(password[i]>='a' && password[i]<='z'){
            lowercase = password[i];
        }
        else if(password[i]>='A' && password[i]<='Z'){
            uppercase = password[i];
        }
        else if(password[i]>='0' && password[i]<='9'){
            digit = password[i];
        }

        else if(password[i] == '@'){
            specialcase = password[i];
        }
    }

     if(length >=7 &&  lowercase  &&  uppercase &&  digit && specialcase){
        cout<<"strong password";
     }
     else{
        cout<<"weak password";
     }

}




