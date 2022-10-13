#include<iostream>
using namespace std;
class Constructor
{
public:
    Constructor()
    {
        cout<<"This default constructor.\n";
    }
    Constructor(int no)
    {
        cout<<"This paramerize Constructor.";
    }
};
int main()
{
    Constructor con;
    Constructor cn(78);
}