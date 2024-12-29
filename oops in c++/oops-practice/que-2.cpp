#include<iostream>
using namespace std;

class Car{

    string model;
    int year;
    int fuellevel;
    int speed;
    bool IsRunning;

    public:
    Car(string model,int year,int fuellevel,int speed, bool IsRunning)
    {
        this->model = model;
        this->year = year;
        this->fuellevel = fuellevel;
        this->speed = speed;
        this->IsRunning = IsRunning;
    }

    void display(){

        cout<<model<<" "<<year<<" "<<fuellevel<<" "<<speed<<" "<<IsRunning<<endl;
    }

    void StartEngine(){
        if(IsRunning == true){
            cout<<"The Car is Start"<<endl;
        }
        
        if(IsRunning == false)
        {
              cout<<"The Car is Stop"<<endl;
        }
    }

    void accelerate(int amt){
        if(amt>speed)
        {
            speed+=amt;
            cout<<"the car has increased the speed by "<<amt<<endl;
            cout<<"the engine state is excellent"<<endl;
            fuellevel-=5;
            cout<<"the fuel-level is decrease to "<<fuellevel<<endl;
          
        }
    }   

    void brake(int amt){
         if(amt>=0 && amt<speed)
         {
            speed-=amt;
            cout<<"the car has decreased the speed by "<<amt<<endl;
         }
    }

    void refuel(int amt)
    {
        if(amt>0 && amt<=fuellevel)
        {
            cout<<"the tank is fueled "<<fuellevel<<endl;
        }
        else{
            cout<<"the tank is unfueled"<<fuellevel<<endl;
        }
    }

    
};

int main()
{
    Car C1("Aura",2023,65,40,true);
    C1.StartEngine();
    C1.accelerate(60);
    C1.brake(70);
    C1.refuel(45);
    C1.display();
}


