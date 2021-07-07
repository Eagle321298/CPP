#include <iostream>
using namespace std;

//base1 class
class base1
{
protected:
    int base1int;

public:
    void set_base1(int a)
    {
        base1int = a;
    }
};

//
class base2
{
protected:
    int base2int;

public:
    void set_base2(int a)
    {
        base2int = a;
    }
};

class base3
{
protected:
    int base3int;

public:
    void set_base3(int a)
    {
        base3int = a;
    }
};

class Derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "value of base1 is " << base1int << endl;
        cout << "value of base2 is " << base2int << endl;
        cout << "value of base3 is " << base3int << endl;
        cout << "sum of these values: " << base3int + base2int + base1int << endl;
    }
};

/*
Data members of derived class:
    int base1;  -->protected
    int base2;  -->protected
    int base3;  -->protected
function members of derived class:
    void set_base1()    -->public
    void set_base2()    -->public
    void set_base3()    -->public
    void show()         -->public

*/
int main()
{
    Derived d1;
    d1.set_base1(10);
    //cin>>"base1=">>d1.base1;        //it won't work, since base1,base2,base3 are protected members of derived as well as base classes
    d1.set_base2(30);
    d1.set_base3(20);
    d1.show();

    return 0;
}