#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age , roll_no;
    string grade;

    public:
    void setname(string s){

        if(s.size()==0){
            cout<<"invalid name ";
            return;
        }
        name = s;
    }

    void setage(int a){

        if(a<0 || a>100){
            cout<<"invalid age";
            return;
        }
        age = a;
    }

    void setroll_no(int r){
        roll_no = r;
    }

    void setgrade(string g){
        grade = g;
    }

    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getroll_no(){
        cout<<roll_no<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }

};

int main(){

    Student S1;
    S1.setname("");
    S1.setage(19);
    S1.setroll_no(12);
    S1.setgrade("A+");
    S1.getname();
    S1.getage();
    S1.getroll_no();
    S1.getgrade(); 


}