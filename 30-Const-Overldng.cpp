#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)//Constructor Overloading
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c(1, 2);
    c.printNumber();
    Complex c1(3);
    c1.printNumber();
    return 0;
}