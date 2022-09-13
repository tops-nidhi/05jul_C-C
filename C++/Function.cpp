#include<iostream>
using namespace std;

int data(int *ptr)
{
    return *ptr;
}
int main()
{
    int a=90;
    
    // ptr=&a;

    cout<<data(&a);
}