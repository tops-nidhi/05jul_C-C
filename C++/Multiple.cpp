#include<iostream>
using namespace std;
class Multiple
{
public:
    int a,b;
    void getdata(){
        cout<<"Enter 2 no:";
        cin>>a>>b;
    }
};
class Add : public Multiple
{
public:
    int add()
    {
        cout<<"Addition is:"<<a+b;
        return 0;
    }
};
class Sub : public Multiple
{
private:
    /* data */
public:
    int sub()
    {
        cout<<"Substrction is:"<<a-b;
        return 0;
    }   
};
int main()
{
    int ch;
    Sub s1;
    Add a1;
    cout<<"\n1.Add\n2.Sub"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
    switch (ch)
    {
    case 1:
        a1.getdata();
        a1.add();
        break;
    
    case 2:
        s1.getdata();
        s1.sub();
    default:
        cout<<"\nNot valid";
        break;
    }
}