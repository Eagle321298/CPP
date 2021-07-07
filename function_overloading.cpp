#include <iostream>
using namespace std;                //function overloading-->ek nam, anek kam ;)
int volume(int a)
{
    return (a*a*a);
}
int volume(int l, int b,int h)
{
    return (l*b*h);
}
int volume(int r, int h)
{
    return (3.142*r*h*r);
}
int main()
{
    int r,l,b,h,a;
    cin>>r>>l>>b>>h>>a;
    cout<<"volme of cube is ";
    cout<<volume(a)<<endl;
    cout<<"volme of rectangle is ";
    cout<<volume(l,b,h)<<endl;
    cout<<"volme of cylinder is ";
    cout<<volume(r,h)<<endl;

 
   return 0;
}