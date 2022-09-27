#include<iostream>
using namespace std;
class This 
{
public:
    int no;
    int data()
    {
        int no=100;
        this->no/*data member*/=no/*local varible*/;
        // cout<<"Local variable no is:"<<no;
        // cout<<endl<<"Data member variable no is:"<<this->no;
        cout<<"Data member variable no is:"<<no;
        return 0;
    }
};
int main()
{
    This t1;
    t1.no=10;
    t1.data();
    return 0;
}