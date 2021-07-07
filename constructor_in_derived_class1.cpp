#include <iostream>
using namespace std;
//https://www.codezclub.com/cpp-use-constructors-in-multilevel-inheritance/

///In multilevel inheritance constructors are executed in order of inheritance
class base1
{
    int data1;
protected:
    int x;
public:
    base1()                 //empty constructor
    {   x=0;
        cout<<"empty constructor of base1 class is called"<<endl;
    }
    base1(int i)            //with argument
    {
        data1 = i;
        cout<<"base1 class constructor is called\n"<<endl;
    }
    void Display1()
    {
        cout << "value of data1 is " << data1 << endl;
    }
    void set_x()
    {
        cout<<"value of x"<<endl;
        cin>>x;
    }
};
class base2 : public base1
{
    int data2;
protected:
    int Y;

public:
    base2():base1()                     //without arguments
    {   Y=0;
        cout<<"empty constructor of base2 class is called"<<endl;
    }
    base2(int a, int b):base1(a)        //with arguments
    {
        data2 = b;
        cout<<"base2 class constructor is called\n"<<endl;
    }
    void Display2()
    {
        cout << "value of data1 is " << data2 << endl;
    }void set_Y()
    {
        cout<<"value of Y"<<endl;
        cin>>Y;
    }

};
class base3 : public base2
{
    int data3;
protected:
    int Z;

public:
    base3():base2()                         //without argument
    {
        Z=0;
        cout<<"empty constructor of base3 class is called"<<endl;
    }
    base3(int a, int b, int c):base2(a,b)       //with arguments
    {
        data3 = c;
        cout<<"base3 class constructor is called\n"<<endl;
    }
    void Display3()
    {
        cout << "value of data3 is " << data3 << endl;
    }
    void set_Z()
    {
        cout<<"value of z"<<endl;
        cin>>Z;
    }
};
int main()
{
    base3 harry(2,5,3);
    harry.set_x();
    harry.set_Y();
    harry.set_Z();

    harry.Display1();
    harry.Display2();
    harry.Display3();

 
   return 0;
}