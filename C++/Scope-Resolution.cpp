#include<iostream>
using namespace std;
int c=100; //global
int add(int a, int b)
{
    int c;
    c=a+b;
    // cout<<endl;
    cout<<"Addition(global) is:"<<::c<<endl;
    return c;//local 
    
}
int main()
{
    cout<<"\n"<<add(12,23);
    
}