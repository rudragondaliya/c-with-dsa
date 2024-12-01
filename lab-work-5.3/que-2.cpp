#include<iostream>
using namespace std;

int main(){

    int language,recharge;
    cout<<"Press 1 for Emnglish"<<endl;
    cout<<"Press 2 for Hindi"<<endl;
    cout<<"Press 3 for Gujarati"<<endl;

    cout<<"Enter your choice:"<<endl;
    cin>>language;


    switch (language)
    {
    case 1:
        cout<<"English"<<endl;
        cout<<"Press 1 for internt Recharge"<<endl;
        cout<<"Press 2 for Top-up Recharge"<<endl;
        cout<<"Press 3 for special Recharge"<<endl;
        break;

    case 2:
        cout<<"Hindi"<<endl;
        cout<<"Internet Recharge ke liye 1 dabaiye"<<endl;
        cout<<"Top-up Recharge ke liye 2 dabaiye"<<endl;
        cout<<"special Recharge ke liye 3 dabaiye"<<endl;
        break;

    case 3:
       cout<<"Gujarati"<<endl;
       cout<<"Internet Recharge mate 1 dabavo"<<endl;
       cout<<"Top-up Recharge mate 2 dabavo"<<endl;
       cout<<"special Recharge mate 3 dabavo"<<endl;
    
    default:
        cout<<"No language has been choosen"<<endl;
        break;
    }


    cout<<"enter any one pack of recharge:"<<endl;
    cin>>recharge;

    switch (recharge)
    {
    case 1:
        cout<<"internet recharge pack"<<endl;
        break;

        case 2:
        cout<<"Top-up recharge pack"<<endl;
        break;

    case 3:
        cout<<"special recharge pack"<<endl;
        break;
    
    default:
        cout<<" no recharge pack has been choosen"<<endl;
        break;
    }
}