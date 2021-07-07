// /////*******swappping private variables of two different classes********///
// #include <iostream>
// using namespace std;

// class B;                           // forward Declaration

// class A
// {
//     int id1;
//     public:
//     friend void Swap(A o1,B o2);
//     void SetData(int a1)
//     {
//         id1=a1;
//     }
// };

// class B
// {
//     int id2;
//     public:
//     friend void Swap(A o1,B o2);
//     void SetData(int b1)
//     {
//         id2=b1;
//     }
// };

// void Swap(A o1,B o2)
// {
//     int temp =o1.id1;
//     o1.id1=o2.id2;
//     o2.id2=temp;
// }
// int main()
// {
//     A o1;
//     o1.SetData(4);

//     B o2;
//     o2.SetData(8);

//     Swap(o1,o2);

//    return 0;
// }





/////*******swappping private variables of two different classes by using call by reference********///
#include <iostream>
using namespace std;

class B; // forward Declaration

class A
{
    int id1;

public:
    friend void Swap(A &o1, B &o2);
    friend void Display(A &o1, B o2);
    void SetData(int a1)
    {
        id1 = a1;
    }
};

class B
{
    int id2;

public:
    friend void Swap(A &o1, B &o2);
    friend void Display(A &o1, B o2);
    void SetData(int b1)
    {
        id2 = b1;
    }
};

void Display(A &o1, B o2)
{
    cout << "id1=" << o1.id1 << " and Id2=" << o2.id2 << endl;
}

void Swap(A &o1, B &o2)
{
    int temp = o1.id1;
    o1.id1 = o2.id2;
    o2.id2 = temp;
}
int main()
{
    A o1;
    o1.SetData(4);

    B o2;
    o2.SetData(8);

    cout << "Before swapping: " << endl;
    Display(o1, o2);

    Swap(o1, o2);
    cout << endl;

    cout << "after swapping: " << endl;
    Display(o1, o2);

    return 0;
}
