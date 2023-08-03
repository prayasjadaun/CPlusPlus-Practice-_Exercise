//Funcyion overloading

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using functions with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using functions with 3 arguments" << endl;
    return a + b + c;
}
int main()
{
    cout << "The sum of 3 and 4 is : " << sum(3, 4) << endl;
    cout << "The sum of 5 , 7 and 6 is : " << sum(5, 7, 6) << endl;

    return 0;
}