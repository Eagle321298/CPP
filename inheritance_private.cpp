#include <iostream>
using namespace std;

//Base class
class employee
{
public:
    int id;
    int salary;
    employee(int no)
    {
        id = no;
        salary = 1000;
        cout << "salary=" << salary << endl;
    }
    employee(){}                //empty constructor 
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
//Derived class
class programmer : private employee           
{
public:
    int expense=600;
    programmer(int a)
    {
        id = a;
        cout << expense << endl;
        cout << id << endl;
    }
    void getdata()
    {
        cout << "id=" << id << endl;
    }
};
int main()
{
    employee e1(20), e2(30);
    programmer p1(12), p2(76);
    // cout << p1.id << endl;             //it show error bcz id is private member of derived class, we shouldn't call it directly
    // cout << p2.id << endl;
    cout << p1.expense << endl;
    cout << p2.expense << endl;
    p1.getdata();

    return 0;
}