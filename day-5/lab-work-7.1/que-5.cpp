#include <iostream>
using namespace std;

int main(){

    int i, j, n=1;

    for(i=5; i>=1; i--){

       for(j=1 ; j<=i; j++){
        cout << n << " ";
       }
        n+=1;
       cout << endl;

    }

    return 0;
}