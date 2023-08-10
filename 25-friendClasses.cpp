#include <iostream>
using namespace std;
// Forward Declaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a;
    int b;
    // Individual function
    //  friend int Calculator ::sumRealComplex(Complex , Complex );
    //  friend int Calculator ::sumCompComplex(Complex , Complex );
    // Alternate way
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
};
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
};

int main()
{
    Complex o1, o2;
    o1.setNumber(10, 20);
    o1.printNumber();
    o2.setNumber(30, 40);
    o2.printNumber();
    Calculator c;
    cout << c.add(10, 20) << endl;
    cout << "The sum of RealComplex is " << c.sumRealComplex(o1, o2) << endl;
    cout << c.add(30, 40) << endl;
    cout << "The sum of CalcComplex is " << c.sumCompComplex(o1, o2) << endl;

    return 0;
}