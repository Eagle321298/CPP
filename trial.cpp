#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int l1, l2;
    char str1[10], str2[10], temp[2];

    cin.getline(str1, 10);
    cin.getline(str2, 10);
    l1 = strlen(str1);
    l2 = strlen(str2);

    cout << l1 << " " << l2 << endl;
    cout << strcat(str1, str2) << endl;

    temp[0]=str1[0];

    for (int i = 0; i < l1; i++)
    {
        str1[0] = str2[0];
        cout << str1[i];
    }
    cout << " ";

    for (int i = 0; i < l2; i++)
    {
        str2[0] = temp[0];
        cout << str2[i];
    }

    return 0;
}