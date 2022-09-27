#include<iostream>
using namespace std;
class  Inline
{

    public:
        inline int add(int a, int b)
        {
            return a+b;
        }
};
int main()
{
    int a,b;
    Inline in;
    cout<<"Enter 2 value:";
    cin>>a>>b;
    cout<<"Addition is:"<<in.add(a,b);
}