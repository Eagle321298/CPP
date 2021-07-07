// // https://www.programiz.com/cpp-programming/object-class
// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
//class-->by default variables in the class are private
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions











// #include <iostream>
// using namespace std;
// class room
// {
// private:
//     int password;

// public:
//     char name[10];
//     int id;
//     int markA, markB, markC, markD, markE;

//     double Average()
//     {
//         float avg = (markA + markB + markC + markD + markE) / 5;
//         return avg;

//     }
// };

// int main()
// {
//     room a;
//     cin.get(a.name, 100);
//     cin >> a.id;
//     cin >> a.markA;
//     cin >> a.markB;
//     cin >> a.markC;
//     cin >> a.markD;
//     cin >> a.markE;
//     // cin >> a.password;       it will give an error, bcz password is private variable

//     cout << "Name=" << a.name << endl;
//     cout << "Id=" << a.id << endl;
//     cout << "Average marks of "<<a.name<<" is " << a.Average() << endl;

//     return 0;
// }










#include <iostream>
using namespace std;
class classroom
{
private:
    int password;

public:
    int getPassword(int p1)
    {
        password = p1;
        return password;
    }

    char name[10];
    int id;
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "id:" << id << endl;
        cout << "password:" << password << endl;
    }
};
int main()
{
    classroom student1;
    cin.get(student1.name, 10);
    cin >> student1.id;
    student1.getPassword(1234);
    student1.display();

    return 0;
}




