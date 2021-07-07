#include <iostream>
using namespace std;

int sum(int a, int b = 5)       //int b=5 is called default argument but if user giving input then function give preferance to user input not default argument

{
    return a * b;
    
}
int main()
{
    int a, b;
    cout << "Ente the value of a and b" << endl;
    cin >> a >> b;
    cout << "the product of a and b is " << sum(a, b) << endl;

    return 0;
}