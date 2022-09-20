#include<iostream>
using namespace std;
class Capsul
{
    int no;
    int id;
public:
    int data()
    {
        cout<<"Enter no:";
        cin>>no;
        cout<<"Enter id:";
        cin>>id;
        cout<<"No is:"<<no<<"\nId is:"<<id;
        return 1;
    }
}cap;
int main()
{
    cap.data();
}