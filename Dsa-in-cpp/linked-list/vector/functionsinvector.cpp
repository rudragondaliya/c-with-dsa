#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>v1;
    v1.push_back("Rudra");
    v1.push_back("Gondaliya");
    for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr)
    cout<<*itr;
    return 0;
}