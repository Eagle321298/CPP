#include <iostream>
using namespace std;
class base1
{
public:
    void display()
    {
        cout << "Hello world!" << endl;
    }
};
class base2
{
public:
    void display()
    {
        cout << "Good morning" << endl;
    }
};

//base1--->
//          ---->derived
//base2--->
class derived : public base1, public base2
{

public:
    void display()
    {
        // base1 ::display();          //ambiguity resolution
        base2 ::display();          //ambiguity resolution
    }
};
int main()
{
    derived d1;
    d1.display(); //without ambiguity resolution it will show an error, since there are two different base class with same function name and after calling that func, compiler  get confused that func from which class should i print
    //to avoid this confusion we used ambiguity resolution

    return 0;
}