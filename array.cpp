
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][2];

//     cout << "Enter marks of student" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout << "marks of roll no"
//                  << " " << i << j << " "
//                  << "student is"
//                  << " ";
//             cout << arr[i][j] << ", ";
//         }
//         cout<< endl;
//     }

//     return 0;
// }

////////////multidimentional array/////////////
#include <iostream>
using namespace std;
int main()
{
    int arr[2][3][2] = {
        {{23, 45}, {56, 43}, {12, 45}},
        {{89, 2}, {22, 11}, {67, 73}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "arr[" << i << "][" << j << "][" << k << "]=" << arr[i][j][k] << " ,";
            }
        }
        cout << endl;
    }

    return 0;
}