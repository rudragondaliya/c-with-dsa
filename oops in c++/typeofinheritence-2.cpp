#include<iostream>
using namespace std;

// SINGLE INHERITENCE
// class Human{

//     protected:
//     string name;
//     int age;

//     public:
//     void work(){
//         cout<<"i am working"<<endl;
//     }
// };

// class Student : public Human{

//     int roll_no,fees;

//     public:
//     Student(string name, int age ,int roll_no ,int fees){

//         this->name = name;
//         this->age = age;
//         this->roll_no = roll_no;
//         this->fees = fees;
//     }
// };


// MULTILEVEL INHERITENCE

// class person{

//     protected:
//     string name;

//     public:

//     void introduce(){
//         cout<<"Hello my name is: "<<name<<endl;
//     }

// };

// class Employee : public person
// {
//     protected:
//     int salary;

//     public:
//     void monthly_salary(){
//         cout<<"my monthly salary is: "<<salary<<endl;
//     }
// };

// class Manager : public Employee
// {
//     public:
//     string department;
//     Manager(string name ,int salary, string department){

//         this->name = name;
//         this->salary = salary;
//         this->department = department;
//     }

//     void work(){
//         cout<<"i am leading the department: "<<department<<endl;
//     }
// };


//     MULTIPLE INHERITENCE

//      class Engineer{

//         public:
//         string specialization;

//         void work(){
//             cout<<"i have specialization in: "<<specialization<<endl;
//         }
//      };

// class Youtuber{

//     public:
//     int subscriber;

//     void content_creator(){

//         cout<<"i have a subscribwer base of: "<<subscriber<<endl;
//     }
// };

// class CodeTeacher : public Engineer, public Youtuber
// {
//     public:
//     string name;

//     CodeTeacher(string name , string specialization,int subscriber)
//     {
//         this->name = name;
//         this->specialization = specialization;
//         this->subscriber = subscriber;
//     }

//     void showcase(){
//         cout<<"My name is :"<<name<<endl;
//         work();
//         content_creator();
        
//     }
// };


//  HIERARCHICAL INHERITENCE
// class Human{

//     protected:
//     string name;
//     int age;

//     public:
//     Human(){

//     }

//     void work(){
//         cout<<"i am working"<<endl;
//     }
// };

// class Student : public Human{

//     int roll_no,fees;

//     public:
//     Student(string name, int age ,int roll_no ,int fees){

//         this->name = name;
//         this->age = age;
//         this->roll_no = roll_no;
//         this->fees = fees;
//     }
// };

// class Teacher : public Human{
//       int salary;

//       public:

//       Teacher(int salary,string name ,int age)     
//       {
//         this->name = name;
//         this->salary = salary;
//         this->age = age;
//       }

//       void display(){
//         cout<<name<<" "<<age<<" "<<salary<<endl;
//       }
// };

//  HYBRID INHERITENCE

//   class Student{
//      public:
//      void print(){
//         cout<<"i am a student"<<endl;
//      }
//   };


//     class Male{
//     public:
//     void male(){
//         cout<<"i am male"<<endl;
//     }
//   };

//     class FeMale{
//     public:
//     void female(){
//         cout<<"i am female"<<endl;
//     }
//   };

//   class Boy : public Student, public Male{
//      public:
//      void Boypri(){
//         cout<<"i am boy"<<endl; 
//      }
//   };

//   class Girl : public Student , public FeMale{ 
//      public:
//      void girlpri(){
//         cout<<"i am girl"<<endl; 
//      }
//   };


// MULTIPATH INHERITENCE

class Huaman{
    public:
    string name;

    void display(){
      cout<<"my name is "<<name<<endl;
    }

};

class Engineer : public virtual Huaman{

        public:
        string specialization;

        void work(){
            cout<<"i have specialization in: "<<specialization<<endl;
        }
     };

class Youtuber : public virtual Huaman{

    public:
    int subscriber;

    void content_creator(){

        cout<<"i have a subscribwer base of: "<<subscriber<<endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
    public:
    int salary;

    CodeTeacher(string name , string specialization,int subscriber,int salary)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber;
        this->salary = salary;
    }

   
        
    };




 





int main(){
    // SINGLE INHERITENCE
    // Student A1("rudra",19,51,100000);
    // A1.work();

    // MULTILEVEL INHERITENCE

    // Manager A1("rudra",10000,"finance");
    // A1.introduce();
    // A1.monthly_salary();
    // A1.work();

    // MULTIPLE INHERITENCE

    // CodeTeacher A1("rudra","bca",3000);
    // A1.showcase();
   
//    HIERARCHICAL INHERITENCE
    //   Teacher A1(9900,"rudra",19);
    //   A1.display();


    // HYBRID INHERITENCE
    
   //  Girl G1;
   //  G1.print();
   //  G1.girlpri();

   //  Boy B1;
   //  B1.Boypri();
    
   //  MULTIPATH INHERITENCE

     CodeTeacher A1("rudra","bca",1000,200000);
     A1.display();
}