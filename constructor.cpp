#include <iostream>
using namespace std;

/*  Characteristics of Constructors

1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created 
3. They cannot return values and do not have return types
4. It can have default arguments 
5. We cannot refer to their address

*/

class complex
{
    int a, b;

public:
    //complex(void);                              //declaration of costructor
    complex(int, int); //declaration of costructor

    void Display()
    {
        cout << "sum of a and b is " << a << "+" << b << "i" << endl;
    }
};
// complex ::complex(void)                         //initialitation of constructor
//                        // ----> This is a default constructor as it takes no parameters
// {
//     a = 3;
//     b = 5;
// }
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{   
    //implicit call
    complex complex1(3, 6), complex2(2, 3), complex3(); //we can call constructor by their initial letter

    complex1.Display();
    complex2.Display();

    //explicit call
    complex c3 = complex(6, 2);
    c3.Display();

    return 0;
}