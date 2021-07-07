#include <iostream>
using namespace std;

class Bank
{
    int principle;
    int years;
    float returnval;
    float interestRate;

public:
    Bank() {}                           //empty constructor requried if they are taking arguments
    Bank(int p, int y, float r);
    Bank(int p, int y, int R);
    void display()
    {
        cout << "The princile amount is " << principle << " and after " << years << "years  return value is " << returnval << endl;
    }
};

Bank::Bank(int p, int y, float r)
{
    principle = p;
    years = y;
    interestRate = r;
    returnval=principle;
    for (int i = 0; i < y; i++)
    {
        returnval = returnval * (interestRate + 1);
    }
}
Bank::Bank(int p, int y, int R)
{
    principle = p;
    years = y;
    interestRate = float(R) / 100;
    returnval=principle;
    for (int i = 0; i < y; i++)
    {
        returnval =returnval * (interestRate+ 1);
    }
}
int main()
{
    Bank b1, b2, b3;
    int y, p, R;
    float r;

    cout << "Enter the valus of p y r" << endl;
    cin >> p >> y >> r;
    b1 = Bank(p, y, r);
    b1.display();

    cout << "Enter the valus of p y R" << endl;
    cin >> p >> y >> R;
    b2 = Bank(p, y, R);
    b2.display();

    return 0;
}