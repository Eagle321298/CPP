#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Hello world!" << endl;
    }
};
class B : public A              //here B is inherited from A
{
public:
    void display()
    {
        cout << "Have a wonderful day!" << endl;
    }
};
int main()
{
    B b1;
    b1.display();               //in such case, compiler prefer to func of that class which is inherited
    return 0;
}