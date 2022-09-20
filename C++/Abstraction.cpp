#include<iostream>
using namespace std;
class Abstract
{
    int x;
public:
    int abstrction(int n)
    {
        x=n;
        x++;
        return x;
    }
};
int main()
{
    Abstract ab;
    cout<<ab.abstrction(45);
}