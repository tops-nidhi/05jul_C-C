#include<iostream>
using namespace std;
struct Structure
{
    int id;
};
int main()
{
    struct Structure st;
    cout<<"Enter your id:";
    cin>>st.id;
    cout<<"\n"<<st.id;
}