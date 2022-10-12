#include<iostream>
using namespace std;
class grand
{
public:
int house;
    int gdata()
    {
        
        cout<<"Enter no of house:";
        cin>>house;
        return 0;
    }
};
class perent : public grand
{ 
public:
int bal;
    int pdata()
    {
        
        cout<<"Enter your total bank balance:";
        cin>>bal;
        return 0;
    }
};  
class child : public perent
{
public:
    int showdata()
    {
        cout<<"\nYour total no of house:"<<house;
        cout<<"\nYour total no of bank balance is:"<<bal;
        return 0;
    }
};
int main()
{
    child c1;
    c1.gdata();
    c1.pdata();
    c1.showdata();
}