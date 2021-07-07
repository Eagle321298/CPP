// ///********Arithmetic operators**********/////////
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter first Number" << endl;
//     cin >> a;

//     cout << "Enter second Number" << endl;
//     cin >> b;

//     cout << "a+b= " << a + b << endl;
//     cout << "a-b= " << a - b << endl;
//     cout << "a*b= " << a * b << endl;
//     cout << "a/b= " << (float)a / b << endl; //we can typecast

//     return 0;
// }

//////////////////logical and relational operators

#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int a , b;

    cout<<"Enter numbers:"<<endl;
    cin>>a;
    cin>>b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << (a != b) << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

    return 0;
}