#include<iostream> 
using namespace std;
class Object
{
    public:
    int a,b;
        int getdata(int a, int b)
        {
            this->a=a;
            this->b=b;
            // cout<<"Value is:"<<a+b;
            return 0;
        }
        int sub(Object, Object);
};
int Object::sub(Object o1, Object o2)
{
    cout<<"A is"<<o2.a-o1.a;
    cout<<"\nB is:"<<o2.b-o1.b;
    return 0;
}
int main()
{
    Object obj1;
    Object obj2;
    Object obj3;
    obj1.getdata(10,22);
    obj2.getdata(30,44);
    obj3.sub(obj1,obj2);

}