#include <iostream>
using namespace std;

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.setDatabySum() == Invalid
3. Can be invoked without the help of any object
4. Usually contain the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/

class complex
{
    int a;
    int b;

public:
    friend complex SetDatabySum(complex c1, complex c2);
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void Display()
    {
        cout << "The sum"<< " is " << a << "+" << b << "i" << endl;
    }
};

complex SetDatabySum(complex c1, complex c2)
{
    complex c3;

    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    return c3;
}
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 4);
    c1.Display();

    c2.setData(2, 3);
    c2.Display();

    c3 = SetDatabySum(c1, c2);          //passing object to the function
    c3.Display();

    return 0;
}
