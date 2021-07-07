#include <iostream>
using namespace std;
//constructor overloading is same as function overloading
class points
{
    int a,b;
    public:
    points(void)
    {
        a=3;
        b=0;
    }
    points(int x,int y)
    {
        a=x;
        b=y;
    }
    points(int x)
    {
        a=x;
        b=8;
    }
    void Display(void)
    {
        cout<<"Given points are "<<"("<<a<<","<<b<<")"<<endl;
    }
};
int main()
{
    points p1,p2(3,6),p3(7);

    p1.Display();
    p2.Display();
    p3.Display();
 
   return 0;
}