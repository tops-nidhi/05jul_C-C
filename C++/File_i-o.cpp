#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream of;
    of.open("D:/nidhi batch/05july_C_C++/c++/hello.txt");
    of<<"Hi";
    of.close();
    ifstream in;
    in.open("D:/nidhi batch/05july_C_C++/c++/hello.txt");
    in>>str;
    cout<<str;
    in.close();
}