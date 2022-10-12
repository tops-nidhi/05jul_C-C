#include<iostream>
using namespace std;
class A
{
private:
    /* data */
public:
    virtual void adata()
    {
        cout<<"This is class a.";
    }
};
class B : virtual public A
{
public:
    void bdata()
    {
        cout<<"\nThis is class b.";
    }
};
class C : virtual public A
{
public:
    void cdata()
    {
        cout<<"\nThis is class C.";
    }
};
class D : public B, public C
{
public:
    void Ddata()
    {
    cout<<"\nThis is class D.";
    }
};
int main()
{
    D a;
    a.adata();
    a.bdata();
    a.cdata();
    a.Ddata();
}