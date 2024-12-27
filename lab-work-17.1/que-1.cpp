#include<iostream>
using namespace std;

int main(){

    int size;

    cout<<"Enter the size of the array:";
    cin>>size;

    int* array = new(nothrow) int[size];

    if(array == nullptr) {
        cout<<"Memory allocation Failed!"<<endl;
    } else{
        cout<<"Memory allocation is successfully created..."<<endl;

        cout<<"enter"<<size<<"elements:";
        for(int i=0;i<size;i++){
            cout<<array[i] <<" ";
        }
        cout<<endl;
    }

    delete[] array;
    cout<<"Array Memory has been deleted successfully."<<endl;

    return 0;
}