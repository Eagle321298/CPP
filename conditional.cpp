#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    if (age > 18)
    {
        cout << "You can vote" << endl;
    }
    else if ((age < 18)&&(age>0))
    {
        cout << "You can't vote" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}