#include <iostream>
using namespace std;

class facebook
{
    int id;
    int salary;

public:
    void setData();
    void display();
};

void facebook::setData()
{
    salary = 50000;
    cout << "Enter the id number:";
    cin >> id;
}
void facebook ::display()
{
    cout << "ID and salary of this employee is " << id << " and " << salary << endl;
}
int main()
{
    facebook employee[20];
    for (int i = 0; i < 20; i++)
    {
        employee[i].setData();
        employee[i].display();
    }

    return 0;
}