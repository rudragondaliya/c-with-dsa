#include<iostream>
#include<string.h>
using namespace std;


class Student{        //DECLARE THE CLASS
    public:           //ACCESS SPECIFER = PUBLIC
     int grid;
     char name[100];
     int age;
     char course[100];
};


int main(){
     
     Student s1;   //DECLARE THE OBJ

     //ASSIGNED THE VALUE

     s1.grid = 7962;
     strcpy(s1.name, "Rudra Gondaliya");
     s1.age = 19;
     strcpy(s1.course, "DSA");

     // ASSIGN THE VALUE

     //PRINT THE STATEMENT

     cout<<"GRID : "<< s1.grid <<endl
         <<"Name : "<< s1.name<< endl
         <<"Age : "<<s1.age<<endl
         <<"course :"<<s1.course<<endl;

        // PRINT THE STATEMENT


    return 0;

     
}

