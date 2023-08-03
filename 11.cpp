#include <iostream>
using namespace std;

struct employee
{

    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee prayas;

    prayas.eId = 1;
    prayas.favChar = 'G';
    prayas.salary = 120000000;

    cout << "The value is " << prayas.eId << endl;
    cout << "The value is " << prayas.favChar << endl;
    cout << "The value is " << prayas.salary << endl;
    return 0 ;
}
