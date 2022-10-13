#include<iostream>
using namespace std;
class A
{
    public:
    void data(int a)
    {
        cout<<"Value of a class is:"<<a;
    }
};
class B
{
    public:
    void data(int a)
    {
        cout<<"\nValue of B class is:"<<a;
    }
};
int main()
{
    A a1;
    B b1;
    a1.data(78);
    b1.data(45);
}