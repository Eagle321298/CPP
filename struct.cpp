#include <iostream>
using namespace std;
struct person
{
    char name[20];
    int age;
    float salary;
};

void displayData(person);  //function declaration

int main()
{
    person p;
    cout << "Enter your name:";
    cin.get(p.name, 20);
    cout << "Enter your age: ";
    cin >> p.age;
    cout << "Enter your salary: ";
    cin >> p.salary;

    displayData(p);

    return 0;
}
void displayData(person p)
{
    cout << "Display the information of p:" << endl;
    cout << "Name: " << p.name << endl;
    cout << "age: " << p.age << endl;
    cout << "salary: " << p.salary << endl;
}