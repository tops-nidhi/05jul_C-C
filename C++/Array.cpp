#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        cout<<"\nEnter value:";
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        cout<<"\n"<<a[i];
    }
}