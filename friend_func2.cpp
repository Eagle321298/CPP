//////*******now we are adding private variables of two different classes by using friend func******/////
#include <iostream>
using namespace std;

class Y;                                    //  forward declaration

class X
{
    int data;

    public:
    friend void Sum(X o1,Y o2);
    void SetData(int a)
    {
        data=a;
    }
};

class Y
{
    int num;

    public:
    friend void Sum(X o1,Y o2);
    void SetData(int b)
    {
        num=b;
    }
};

void Sum(X o1,Y o2)
{
    cout<<"sum of variables of two different class is "<<o1.data+o2.num<<endl;
}
int main()
{
    X o1;
    o1.SetData(5);

    Y o2;
    o2.SetData(3);

    Sum(o1,o2);
 
   return 0;
}





