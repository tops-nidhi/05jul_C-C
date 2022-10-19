#include<iostream>
using namespace std;
class Base
{
public:
    virtual int data()
    {
        cout<<"In base class.";
        return 0;
    }
};
class Derived : public Base
{
    public:
    int data()
    {
        cout<<"\nIn derived class.";
        return 0;
    }
};
int main()
{
    Base *b1 = new Base;
    b1 -> data();
}