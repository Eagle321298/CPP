#include <iostream>
using namespace std;
////protected members are same as private member, we can access it in classes but cant call it in main function
/************************************************************************************

                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected

*************************************************************************************/

class base
{
public:
    int a;

private:
    int b;
};

class derived : protected base
{   
   
};
int main()
{
    base b1;
    b1.a;              //it will work, since a is public member of base class 

   
    derived d1;
    //d1.a;            //it will not work,since a is protected in derived class after inheritance

    return 0;
}