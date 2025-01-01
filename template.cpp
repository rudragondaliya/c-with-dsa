#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Pair{
    private:
     T1 x;
     T2 y;

     public:

     pair(T1 x,T2 y){

        this->x = x;
        this->y = y;
     }

     void getData(){
        cout<<"X:"<< this->x<<" , y:"<<this->y<<endl;
     }
};
