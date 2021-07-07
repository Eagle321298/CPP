#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    //basic example
    // int *ptr=&a;

    //New operator
    // int *ptr=new int(12);
    // float *ptr=new float(12.24);
    char *ptr = new char('d');
    cout << "value of a is " << *ptr << endl;

    int *arr = new int[5];
    arr[0] = 23;
    *(arr + 1) = 70;
    arr[2] = 91;
    arr[3] = 1;
    arr[4] = 89;

    // delete[] arr;                        //Delete operator
    cout << "value of arr[0] is " << arr[0] << endl;
    cout << "value of arr[1] is " << arr[1] << endl;
    cout << "value of arr[2] is " << arr[2] << endl;
    cout << "value of arr[3] is " << arr[3] << endl;
    cout << "value of arr[4] is " << arr[4] << endl;

    return 0;
}