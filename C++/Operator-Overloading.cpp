#include<iostream>
using namespace std;
class Overload
{
public:
    int no;
    void get()
    {
        cout<<"Enter value:";
        cin>>no;
    }
    Overload operator +(Overload over)
    {
        Overload over1;
        over1.no= no + over.no;
        return over1;
    }
    void show()
    {
        cout<<"\nVlaue of no is:"<<no;
    }
};
int main()
{
    Overload ovr,ovr1;
    cout<<"\nEnter value:\n";
    ovr.get();
    ovr1.get();
    cout<<"\nEntered value:\n";
    ovr.show();
    ovr1.show();
    Overload ovr3;
    ovr3 = ovr + ovr1;
    cout<<"\nResult is:\n";
    ovr3.show();
}