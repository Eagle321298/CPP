// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 23;
//     int *ptr = &a;
//     cout << "value of a: " << a << endl;
//     cout << "value of a: " << *ptr << endl;
//     cout << "Address of a: " << &a << endl;
//     cout << "Address of a: " << ptr << endl;
//     cout << "Address of ptr: " << &ptr << endl;

//     return 0;
// }






///////*******passing pointr to structure & function *******//////////
#include <iostream>
using namespace std;

struct triangle
{
    int l;
    int b;
    int h;
};

void displayVolume(triangle);      //function declaration

int main()
{   
    triangle *ptr, d;
    ptr=&d;
    cout<<"Enter the value of l,b and h of Triangle:"<<endl;
    cin>>d.l;                  //line no. 39,40,41 does same work
    cin>>(*ptr).b;
    cin>>ptr->h;

    // calling the function 
    displayVolume(d);
 
   return 0;
}

void displayVolume(triangle d)
{
    cout<<"l="<<d.l<<endl;
    cout<<"b="<<d.b<<endl;
    cout<<"h="<<d.h<<endl;
    float v=((d.l)*(d.b)*(d.h))*1/2;
    cout<<"Volume of given triangel is "<<v;
}