  class Student{
     public:
     void print(){
        cout<<"i am a student"<<endl;
     }
  };

  class Boy : public Student, public Male{
     public:
     void Boypri(){
        cout<<"i am boy"<<endl; 
     }
  };

  class Girl : public Student , public FeMale{ 
     public:
     void girlpri(){
        cout<<"i am girl"<<endl; 
     }
  };

  class Male{
    public:
    void male(){
        cout<<"i am male"<<endl;
    }
  };

    class FeMale{
    public:
    void female(){
        cout<<"i am female"<<endl;
    }
  };