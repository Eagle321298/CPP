#include <iostream>
#include <string>
using namespace std;

class Binary
{
private:
    string s;

public:
    void read();
    void chk_bin();
    void compliment();
    void display();
};
void Binary ::read()
{
    cout << "Enter the binary number:" << endl;
    cin >> s;
    chk_bin();
}
void Binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '1') && (s.at(i) != '0'))
        {
            cout << "NOT binary number" << endl;
            exit(0);
        }
    }
    display();
}
void Binary ::compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    compliment();
    cout << endl;
}
int main()
{
    Binary a;
    a.read();
    a.display();
    return 0;
}