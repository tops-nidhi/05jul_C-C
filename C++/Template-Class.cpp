#include<iostream>
using namespace std;
template <typename n>
class Template
{
public:
    n add(n a, n b)
    {
        return a+b;
    }
};
int main()
{
    Template <int> t1;
    cout<<t1.add(12,45);
    Template <float> t2;
    cout<<endl<<t2.add(4.5,1.2);

}