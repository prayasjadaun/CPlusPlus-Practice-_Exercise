#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 120;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "This is the id of employee " << id << endl;
    }
};

int main()
{
    
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}