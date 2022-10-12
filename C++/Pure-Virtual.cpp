#include<iostream>
using namespace std;
class a
{
    public:
    virtual void adata()=0;
};
class b : public a
{
    public:
    void adata()
    {
        cout<<"This is pure virtual function.";
    }
};
int main()
{
    b b1;
    b1.adata();
}