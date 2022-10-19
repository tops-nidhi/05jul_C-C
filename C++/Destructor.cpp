#include<iostream>
using namespace std;
class Destructor
{
public:
    Destructor()
    {
        cout<<"This is constructor."<<endl;
    } 
    ~Destructor()
    {
        cout<<"This is destructor.";
    }
};
int main()
{
    Destructor des;
}