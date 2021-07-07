#include <iostream>
using namespace std;

/*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
*/
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void student ::set_roll_no(int r)
{
    roll_no = r;
}
void student ::get_roll_no(void)
{
    cout << "roll_no:" << roll_no << endl;
}

class score : public student
{
protected:
    int maths;
    int physics;

public:
    void set_score(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_score(void)
    {
        cout << "score obtained in maths are " << maths << endl;
        cout << "score obtained in physics are " << physics << endl;
    }
};

class result : public score
{
public:
    void display_result(void)
    {
        cout << "roll_no:" << roll_no << endl;
        cout << "Score in maths:" << maths << endl;
        cout << "Score in physics:" << physics << endl;
        cout << "result is " << (maths + physics) / 2 << " %" << endl;
    }
};

int main()
{
    result rutika;
    rutika.set_roll_no(61);
    rutika.set_score(93, 90);
    rutika.display_result();

    return 0;
}