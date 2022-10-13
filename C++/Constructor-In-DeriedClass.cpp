#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"This is Base class constructer.";
    }
};
class Derived : public Base
{
    public:
    Derived() : Base()
    {
        cout<<"\nThsi derived class constructor.";
    } 
};
int main()
{
    Derived d1;
    return 0;
}
