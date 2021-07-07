#include <iostream>
using namespace std;

//          ------->Study------->
//Student--->                     --------->Result
//          ------->Sports------>

class Student
{
protected:
    int id;

public:
    Student()
    {
    }
    Student(int a)
    {
        id = a;
        cout << "constructor of student class called" << endl;
    }
    void get_id()
    {
        cout << "ID no. of the student is " << id << endl;
    }
};
class study : public Student
{
protected:
    float maths, physics;

public:
    study(float b, float c, int a) : Student(a)
    {
        maths = b;
        physics = c;
        cout << "constructor of study class called" << endl;
    }
    void get_marks()
    {
        cout << "Your result is here:" << endl
             << "marks obtained in maths " << maths << endl
             << "marks obtained in physics " << physics << endl;
    }
};
class sports : public Student
{
protected:
    float score;

public:
    sports(float p, int a) : Student(a)
    {
        score = p;
        cout << "constructor of sports class called" << endl;
    }
    void get_score(void)
    {
        cout << "score obtained in sports is " << score << endl;
    }
};
class result : public study, public sports
{
private:
    float Total;

public:
    result(int a, int e, float p, float b, float c) : study(b, c, a), sports(p, e)
    {
        cout << "constructor of result  class called" << endl;
    }
};
int main()
{
    result r1(61, 72, 23.5, 93.2, 82.2);
    r1.get_id();
    r1.get_marks();
    r1.get_score();

    return 0;
}