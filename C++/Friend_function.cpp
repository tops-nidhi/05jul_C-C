#include<iostream>
using namespace std;
class Friend 
{
    int no;
public:
    friend int data(Friend);
};
int data(Friend fd)
{
    cout<<"Enter no:";
    cin>>fd.no;
    cout<<"No is:"<<fd.no;
    return 0;
}
int main()
{
    Friend f1;
    data(f1);
}