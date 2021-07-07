#include <iostream>
#include <cmath>
#define PI 3.1428
using namespace std;

class standard
{
    int a, b;

public:
    void getData1()
    {
        cout<<"Enter value of a and b"<<endl;
        cin >> a >> b;
    }
    void addition()
    {
        cout << a << "+" << b << "=" << a + b << endl;
    }
    void subrtraction()
    {
        cout << a << "-" << b << "=" << a - b << endl;
    }
    void multiplication()
    {
        cout << a << "*" << b << "=" << a * b << endl;
    }
    void division()
    {
        cout << a << "/" << b << "=" << a / b << endl;
    }
};
class scientific
{
    double c;

public:
    void getData2()
    {
        cout<<"Enter value of c"<<endl;
        cin >> c;
    }
    void sine()
    {
        float d = (c * PI) / 180;
        cout << "sin(" << c << ")=" << sin(d) << endl;
    }

    void cosine()
    {
        float d = (c * PI) / 180;
        cout << "cos(" << c << ")=" << cos(d) << endl;
    }
    void tangent()
    {
        float d = (c * PI) / 180;
        cout << "tan(" << c << ")=" << tan(d) << endl;
    }
    void logarithmic()
    {
        cout << "log(" << c << ")=" << log(c) << endl;
    }
    void expontial()
    {
        cout << "e^" << c << "=" << exp(c) << endl;
    }
};
class hybrid : public standard, public scientific
{
};
int main()
{
    hybrid c1;
    int n1, n2, m;
    cout << "Enter 1 for standard mode and 2 for scientific mode" << endl;
    cin >> m;
    if (m == 1)
    {

        c1.getData1();
        cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n"
             << endl;
        cin >> n1;
        switch (n1)
        {
        case 1:
            c1.addition();
            break;
        case 2:
            c1.subrtraction();
            break;
        case 3:
            c1.multiplication();
            break;
        case 4:
            c1.division();
            break;
        }
    }
    else if (m == 2)
    {
        c1.getData2();
        cout << "Enter 1 for sine angle, 2 for cosien, 3 for tan, 4 for log , 5 for expontial" << endl;
        cin >> n2;
        switch (n2)
        {
        case 1:
            c1.sine();
            break;
        case 2:
            c1.cosine();
            break;
        case 3:
            c1.tangent();
            break;
        case 4:
            c1.logarithmic();
            break;
        case 5:
            c1.expontial();
            break;
        }
    }

    return 0;
}