#include<iostream>
using namespace std;

// SINGLE INHERITENCE
class Animal{
    public:
    void eat(){
        cout<<"tiger is eating"<<endl;
    }
};

class tiger: public Animal{
     public:
     void sleep(){
        cout<<"tiger is sleeping"<<endl;
     }
};

// MULTI-LEVEL INHERITENCE

class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};

class dog: public Animal{
    public:
    void sleep(){
        cout<<"dog is sleeping"<<endl;
    }
};

class pitbull : public dog{
    public:
    void bark(){
        cout<<"pitbull is barking"<<endl;
    }
};


int main(){
    // SINGLE INHERITENCE
    tiger A;
    A.eat();
    A.sleep();

    // MULTI-LEVEL INHERITENCE
    pitbull A;
    A.eat();
    A.sleep();
    A.bark();

}