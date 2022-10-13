#include<iostream>
using namespace std;
class Akshay
{
public:
    int aid;
    void adata()
    {
        cout<<"Akshay:-\n";
        cout<<"Enter your id:";
        cin>>aid;
    }
};
class Milan
{
public:
    int mid;
    void mdata()
    {
        cout<<"\nMilan:-";
        cout<<"\nEnter your id:";
        cin>>mid;
    }
};
class Gaurav
{
public:
    int gid;
    void gdata()
    {
        cout<<"\nGaurav:-\n";
        cout<<"Enter your id:";
        cin>>gid;
    }
};  
class Tops : public Akshay, public Milan, public Gaurav
{
public:
    int showdata()
    {
        cout<<"\n----------Akshay----------";
        cout<<"\n\tYour id is:"<<aid;
        cout<<"\n\n----------Milan-----------";
        cout<<"\n\tYour id is:"<<mid;
        cout<<"\n\n-----------Gaurav----------";
        cout<<"\n\tYour id id:"<<gid;
        return 0;
    }
};
int main()
{
    Tops t1;
    t1.adata();
    t1.mdata();
    t1.gdata();
    t1.showdata();
    return 0;
}
