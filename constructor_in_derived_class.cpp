#include <iostream>
using namespace std;

/* case 1- 
class A : public B  -----> order of execution of constructor=B,A

case 2-
class A: public C, public D   ------>C,D,A

case 3-
class A: virtual public E, public F         -------->E,F,A


*/

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout<<"base2 class constructor is called\n"<<endl;
    }
    void Display2()
    {
        cout << "value of data2 is " << data2 << endl;
    }
};
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout<<"base1 class constructor is called\n"<<endl;
    }
    void Display1()
    {
        cout << "value of data1 is " << data1 << endl;
    }
};

class Derived : public base2, public base1          //according to this order constructors are executed
{
    int scroe1, score2;

public:
    Derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        scroe1 = c;
        score2 = d;
        cout<<"derived class constructor is called\n"<<endl;
    }
    void display()
    {
        cout<<"score1="<<scroe1<<endl;
        cout<<"score2="<<score2<<endl;

    }
};
int main()
{
    Derived d1(1,2,3,4);
    d1.display();
    d1.Display2();
    d1.Display1();

    return 0;
}