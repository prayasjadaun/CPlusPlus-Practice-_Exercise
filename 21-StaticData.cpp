#include <iostream>

using namespace std;
// Static Data Member
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id " << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of employee is " << id << " and this is employee number of " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

// Count is the Static data member of class employee

int Employee ::count; // Default value is 0.

int main()
{
    Employee prayas, randev, prateek;

    prayas.setData();
    prayas.getData();
    Employee::getCount();
    randev.setData();
    randev.getData();
    Employee::getCount();

    prateek.setData();
    prateek.getData();
    Employee::getCount();

    return 0;
}