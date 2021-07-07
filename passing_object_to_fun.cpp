#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void SetDatabySum(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void Display()
    {
        cout << "The sum of " << a << " and " << b << " is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 4);
    c1.Display();

    c2.setData(2, 3);
    c2.Display();

    c3.SetDatabySum(c1, c2);                //passing object to the function
    c3.Display();

    return 0;
}