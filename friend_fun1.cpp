#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    friend class calculator;

    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void Display()
    {
        cout << "The sum of complex number "<< a <<" and "<< b <<" is " << a << "+" << b <<"i"<< endl;
    }
};

class calculator
{
public:
    int sumofReal(complex, complex);
    int sumofcomp(complex, complex);
};
int calculator ::sumofReal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumofcomp(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setdata(2, 5);
    o1.Display();
    o2.setdata(1, 6);
    o2.Display();

    calculator calc;
    int d = calc.sumofReal(o1, o2);
    cout << "real part of total sum is " << d << endl;
    int e = calc.sumofcomp(o1, o2);
    cout << "imaginary part of total sum is " << e << endl;

    return 0;
}