#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //**********Manipulaters in C++**********

    // int a = 4, b = 13, c = 654, d = 1234;
    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b without setw is "<<b<<endl;
    // cout<<"The value of c without setw is "<<c<<endl;
    // cout<<"The value of d without setw is "<<d<<endl;

    // cout<<"The value of a is "<<setw(4)<<a<<endl;
    // cout<<"The value of b is "<<setw(4)<<b<<endl;
    // cout<<"The value of c is "<<setw(4)<<c<<endl;
    // cout<<"The value of d is "<<setw(4)<<d<<endl;


    // ******Operators Precedence******
     //sbse phle konsa operators evaluate hoga

    int a = 3, b = 2;
    int c = ((((a*5)+b)-4)+8);
    cout<<"The value of c is "<<c<<endl;

    return 0;
}