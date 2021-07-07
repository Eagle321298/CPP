// //////*********unary operator overloading*********/////

// #include <iostream>
// using namespace std;
// class score
// {
//     public:
//     int count;

//     score()              ///constructor to initialise variable
//     {
//         count=23;
//     }
//     void operator ++ ()          ///overload ++ when used as postfix
//     {
//         count++;
//     }
//     void display()
//     {
//         cout<<"score="<<count;
//     }
// };
// int main()
// {
//     score score1;
//     ++score1;                    ///calling void operator ++ () function
//     score1.display();
 
//    return 0;
// }












// //////*********unary operator overloading*********/////

#include <iostream>
using namespace std;
class score
{
    public:
    int count;

    score()              ///constructor to initialise variable
    {
        count=23;
    }
    void operator ++ ()          ///overload ++ when used as postfix
    {
        count++;
    }
    void operator ++(int)              ///overload ++ when use as prefix
    {
        ++count;
    }
    void display()
    {
        cout<<"score="<<count<<endl;
    }
};
int main()
{
    score score1;
    ++score1;                    ///calling void operator ++ () function
    score1.display();
    score1++;
    score1.display();
 
   return 0;
}








