// #include <iostream>
// using namespace std;

// class A
// {
//     int a;
//     int b;

// public:
//     A(int i, int j)
//     {
//         a = i;
//         b = j;
//     }
//     void display()
//     {
//         cout << "value of a and b is " << a << " and " << b << endl;
//     }
// };

// int main()
// {
//     A A1(5, 6);
//     A1.display();

//     return 0;
// }





////////*******alternative method for this************///////

#include <iostream>
using namespace std;

// Syntax for initialization list in constructor:
// constructor (argument-list) : initilization-section
// {
//     assignment + other code;
// }

class A
{
    int a;              ///initialization ordr
    int b;

public:
    A(int i, int j):a(i),b(j)
    // A(int i, int j):a(j),b(i)
    // A(int i, int j):a(j),b(i+j)
    // A(int i, int j):a(j),b(a*j)
    // A(int i, int j):b(j),a(i*b)      -----
                                              //--->>>both will give garbage value, bcz we initialize a first then b
    // A(int i, int j):a(j*b),b(i*j)    -----
    {
        
    }
    void display()
    {
        cout << "value of a and b is " << a << " and " << b << endl;
    }
};

int main()
{
    A A1(5, 6);
    A1.display();

    return 0;
}