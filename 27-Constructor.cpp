#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); //Constructor Declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void) //Default Constructor as it accepts no parameter
{
    a = 10;
    b = 0;
}
int main()
{
    Complex c;
    c.printNumber();

    return 0;
}