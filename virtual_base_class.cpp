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
    void Set_id(int a)
    {
        id = a;
    }
    void get_id()
    {
        cout << "ID no. of the student is " << id << endl;
    }
};
class study : public virtual Student
{
protected:
    float maths, physics;

public:
    void Set_marks(float b, float c)
    {
        maths = b;
        physics = c;
    }
    void get_marks()
    {
        cout << "Your result is here:" << endl
             << "marks obtained in maths " << maths << endl
             << "marks obtained in physics " << physics << endl;
    }
};
class sports : virtual public Student
{
protected:
    float score;

public:
    void Set_score(float p)
    {
        score = p;
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
    void Display(void)
    {
        get_id();
        get_marks();
        get_score();
        Total = score + maths + physics;
        cout << "Total score of the " << id << " no. student is " << Total << endl;
    }
};
int main()
{
    result r1;
    r1.Set_id(72);
    r1.Set_marks(99.5, 93.9);
    r1.Set_score(91);
    r1.Display();

    return 0;
}