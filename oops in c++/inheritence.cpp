#include<iostream>
using namespace std;

class Human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun(){
        a = 10;
        b = 20;
        c = 30;
    }
};

int main(){

    Human rudra;
    rudra.c=10;
    rudra.fun();
}