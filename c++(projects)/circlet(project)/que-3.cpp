#include<iostream>
using namespace std;

int main(){

    int n=5,i,j,k;

    for(i=0;i<=n;i++){
        for(k=0;k<i;k++){
            cout<<"  ";
        }

        for(j=0;j<n-i;j++){
            if(j%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }

        cout<<endl;
    }

    return 0;
}