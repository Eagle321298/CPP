// // https://www.programiz.com/cpp-programming/constructors
// #include <iostream>
// #include <cmath>
// using namespace std;

// class Line
// {
// private:
//     int x1, x2, y1, y2;

// public:
//     //constructor to initialise variables  x1,x2,y1,y2
//     Line(int a, int b, int c, int d)           //function Line is constructor of class Line, has same name as the class
//     //constructor is public
//     {
//         x1 = a;
//         x2 = b;
//         y1 = c;
//         y2 = d;
//         int o=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
//         cout<<o<<endl;
//     }

// };

// int main()
// {
//     Line Line1(1,3,2,5);
//     Line Line2(1,5,2,5);

//     return 0;
// }

///// passing object to function///
#include <iostream>
using namespace std;
class Circle
{
public:
    int radius;

    Circle(int r) //constructor to initialise variable
    {
        radius = r;
    }
};

void area( Circle c1)       //function that has object as variable 
{
    float result;
    result = c1.radius * c1.radius * 3.14;
    cout << result;
}

int main()
{
    Circle circle1(2);
    area(circle1);          

    return 0;
}