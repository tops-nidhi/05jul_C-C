#include<iostream>
using namespace std;
class Poly
{
public:
    int add(int a, int b)
    {
        cout<<"Addtion is:"<<a+b;
        return 0;
    }
    int add (int a, int b, int c)
    {
        cout<<"\nAddition is:"<<a+b+c;
        return 0;
    }
};
int main()
{
    Poly p1;
    p1.add(45,90);
    p1.add(48,5,2);
}