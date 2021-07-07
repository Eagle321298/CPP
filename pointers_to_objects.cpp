#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

    public:
    void SetData(int a, int b)
    {
        real=a;
        imaginary=b;
    }
    void GetData()
    {
        cout<<"real part is "<<real<<endl;
        cout<<"imaginary part is "<<imaginary<<endl;
    }

};
int main()
{
    Complex c1;
    // c1.SetData(23,4);                    //basic example
    // c1.GetData();

    // Complex *ptr=&c1;                    //pointer to object
    // (*ptr).SetData(64,11);
    // (*ptr).GetData();

    Complex *p=new Complex;                 //alternative method of pointer to object by using new operator
    // (*p).SetData(22,33);
    // (*p).GetData();

    p->SetData(44,55);                      //Arrow operator
    p->GetData();

   return 0;
}