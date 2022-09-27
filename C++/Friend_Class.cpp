#include<iostream>
using namespace std;
class A
{
    int no;
public:
    friend class B;
};
class B
{
    public:
        int data(A &a1)
        {
            cout<<"Enter no:";
            cin>>a1.no;
            cout<<"Value of no is:"<<a1.no;
            return 0;
        }
};
int main()
{
    A a;
    B b;
    b.data(a);
}