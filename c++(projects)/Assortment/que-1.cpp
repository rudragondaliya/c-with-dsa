#include<iostream>
using namespace std;

int main()
{
    int len;
    cout<<"Enter the size of array:"<<endl;
    cin>>len;

    int *arr = new int[len];

    for(int i=0;i<len;i++)
    {
        cout<<"Enter array element: arr[" << i <<"]= ";
        cin>>arr[i];
    }

    cout<< "Negative elements of the array are:";
    for(int i=0;i<len;i++)
    {
        if(arr[i]<0)
        {
            cout << " " << arr[i] << " ";
        }
    }

    delete [] arr;

    return 0;
}