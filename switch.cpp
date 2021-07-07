#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Value of a is "  << endl;
    cin >> a;
    switch (a)
    { 
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
    case 3:
        cout << "three" << endl;
        default:
        break;
    }

    return 0;
}