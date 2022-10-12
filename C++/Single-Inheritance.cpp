#include<iostream>
using namespace std;
class Base
{
private:
    /* data */
public:
   int x;
   int y;
   int z;
};
class  Derived : public Base
{
private:
    /* data */
public:
    int getdata()
    {
        cout<<"Enter 2no:";
        cin>>x>>y;
        z=x+y;
        cout<<"Addition is:"<<z;
        return 0;
    }
};
int main(int argc, char const *argv[])
{
    Derived d1;
    d1.getdata();
    return 0;
}
