#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;

    public:
    Rectangle(int len,int wid):length(len),width(wid){}

    int calculateArea(){
        return length * width;
    }

    int calculatePerimeter(){
        return 2 * (length + width);
    }

};

int main()
{
    int length , width;
    cout<<"Input the length of the rectangle";
    cin>>length;
    cout<<"Input the width of the rectangle:";
    cin>>width;

    Rectangle rectangle(length,width);  


}