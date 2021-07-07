#include <iostream>
using namespace std;

class Number
{
    int a;
    int b;

public:
    Number() //empty constructor
    {
        //    a=0;
    }
    Number(int num, int score)
    {
        a = num;
        b = score;
    }
    // Number(Number &anyObj)
    // {
    //     cout<<"copy constructor!!"<<endl;
    //     a=anyObj.a;
    // }
    void Display()
    {
        cout << "value of this object is " << a << " and " << b << endl;
    }
};

int main()
{
    Number x, y(12, 23), z(3, 34), z2;
    z.Display();
    x.Display();
    y.Display();

    Number z1(z); //if i will run program without creating copy constrctor func. still it shows correct result
    z1.Display();

    z2 = y;
    z2.Display();

    return 0;
}