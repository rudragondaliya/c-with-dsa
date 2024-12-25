#include<iostream>
using namespace std;

// // SINGLE INHERITENCE
// class Animal{
//     public:
//     void eat(){
//         cout<<"tiger is eating"<<endl;
//     }
// };

// class tiger: public Animal{
//      public:
//      void sleep(){
//         cout<<"tiger is sleeping"<<endl;
//      }
// };

// MULTI-LEVEL INHERITENCE

// class Animal{
//     public:
//     void eat(){
//         cout<<"Animal is eating"<<endl;
//     }
// };

// class dog: public Animal{
//     public:
//     void sleep(){
//         cout<<"dog is sleeping"<<endl;
//     }
// };

// class pitbull : public dog{
//     public:
//     void bark(){
//         cout<<"pitbull is barking"<<endl;
//     }
// };

// MULTIPLE INHERITENCE
//    class Engine{
//     public:
//     char engine_name[50]="VB";
//    };

//    class wheel{
//      public:
//      char wheel_name[50]="MRF";
//    };

//    class car : public Engine, public wheel{
//     public:
//     void make(){
//         cout<<"A new car is prepare with engine "<<engine_name<<" and wheel is of "<<wheel_name<<endl;
//     }
//    };


// HYBRID INHERITENCE
//    class A{
//      public:
//      void tiger(){
//         cout<<"tiger is eating"<<endl;
//      }
//    };

//    class B : public A{
//      public:
//      void lion(){
//         cout<<"lion is eating"<<endl;
//      }
//    };

//    class C : public A{
//     public:
//     void cheetah(){
//         cout<<"cheetah is eating"<<endl;
//     }
//    };

//    class D : public B,public C{
//     public:
//     void leopard(){
//         cout<<"leopard is eating"<<endl;
//     }
//    };

//    HIREARCHICAL INHERITENCE
      class ANIMAL{
        public:
        void eat(){
            cout<<"tiger is eating"<<endl;
        }
      };

      class tiger : public ANIMAL{
        public:
        void sleep(){
            cout<<"tiger is sleeping"<<endl;
        }
      };

      class lion : public ANIMAL{
        public:
        void sleep(){
            cout<<"lion is sleeping"<<endl;
        }
      };    

int main(){
    // SINGLE INHERITENCE
    // tiger A;
    // A.eat();
    // A.sleep();

    // MULTI-LEVEL INHERITENCE
    // pitbull A;
    // A.eat();
    // A.sleep();
    // A.bark();

    // MULTIPLE INHERITENCE
    //  car A;
    //  A.make();

    // HYBRID INHERITENCE
    //    D a;
    //    a.C::tiger();
    //    a.B::tiger();
    //    a.cheetah();
    //    a.lion();

    // HIREARCHICAL INHERITENCE
    lion c;
    tiger  t;

    c.eat();
    t.eat();

    c.sleep();
    t.sleep();






}