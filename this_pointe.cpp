#include <iostream>
using namespace std;

class A
{
    int a;
    public:
    // void SetData(int a)
    A &SetData(int a)
    {
        this->a=a;
        return *this;
    }
    void GetData()
    {
        cout<<"Value of a is "<<a<<endl;
    }
};
int main()
{
    A b;
    b.SetData(3).GetData();
    // b.GetData();
 
   return 0;
}