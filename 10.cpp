#include <iostream>
using namespace std;

int main()
{
    /*What is Pointer..? ---->Data types which holds the
     addressof other data type*/

    int a = 7;
    int *b = &a;
    // &----> (Address of) Operators
    cout << "The address of  &a is " << &a << endl;
    cout << "The address of  b is " << b << endl;

    // *-----> (Value at)Operators
    cout << "value at b is " << *b << endl;


    // Pointer to Pointer
    int **c = &b;
    cout << "The addres of b is " << &b << endl;
    cout << "The addres of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is  " << **c << endl;

    return 0;
}