#include <iostream>
using namespace std;

main(){
	
	int i,j,k; 
	
for ( i=0;i<5;i++) 
  {
  	
    for(k=0;k<5-i;k++) 
    {
      cout<<"  ";
    }
    for(j=5-i;j<=5;j++) 
    {
      cout<<j<<" ";
    }
    for(j=4;j>=5-i;j--) 
    {
	cout<<j<<" ";
    }
      cout<<endl; 
  }
}