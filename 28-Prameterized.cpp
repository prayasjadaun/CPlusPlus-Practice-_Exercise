#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x, int y) //This is parameterized constructor as it accepts 2 parameters
{
    a = x;
    b = y;
}
int main()
{
    Complex a(1, 2);
    a.printNumber();
    Complex b = Complex(3, 4);
    b.printNumber();

    return 0;
}