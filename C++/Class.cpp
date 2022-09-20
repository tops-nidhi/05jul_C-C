#include<iostream>
using namespace std;
class data
{
    int no;
protected:
    int getdata()
    {
        no=90;
        cout<<"Enter no:";
        // cin>>no;
        return 0;
    }
public:
    int showdata()
    {
        no=90; 
        cout<<"No is:"<<no;
        return 0;
    }
};
int main()
{
    data obj;
    // obj.getdata();
    obj.showdata();
    return 0;
}