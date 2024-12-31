#include<iostream>
using namespace std;

// FUNCTION OVERLOADING

class Area{
  
  public:
  int calculateArea(int r)
  {
    return 3.14*r*r;
  }

  int calculateArea(int l , int b)
  {
    return l*b;
  }

};

// OPERATOR OVERLOADING

class Complex{

  int real , img;

  public:

  Complex(){

  }

  Complex(int real, int img)
  {
    this->img = img;
    this->real = real;

  }

  void display(){
    cout<<real<<" +i"<<img<<endl;
  }

  Complex operator +(Complex &C)
  {
    Complex ans;
    ans.real = real+C.real;
    ans.img = img+C.img;
  }

};


// VIRTUAL FUNCTION

class Animal{
   
   public:
  virtual void speak(){
      cout<<"Huhu"<<endl;
   }

};


class Dog : public Animal{
   
   public:
   void speak(){
      cout<<"Bark"<<endl;
   }

};

class Cat : public Animal{
   
   public:
   void speak(){
      cout<<"Meow"<<endl;
   }

};


int main(){

// FUNCTION OVERLOADING
    // Area A1;
    // cout<<A1.calculateArea(4)<<endl;
    // cout<<A1.calculateArea(2,3)<<endl;

// OPERATOR OVERLOADING

    // Complex C1(3,4);
    // Complex C2(4,6);
    // Complex C3 = C1 + C2;
    // C3.display();

  // VIRTUAL FUNCTION

  // Animal *p;
  // p = new Dog();
  // p->speak();

  // Animal *p;
  // vector<Animal*>animals;
  // animals.push_back(new Dog());
  // animals.push_back(new Cat());
  // animals.push_back(new Animal());
  // animals.push_back(new Dog());
  // animals.push_back(new Cat());

  // for(int i=0;i<animals.size();i++){
  //   p = animals[i];
  //   p->speak();
  // }
}