#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; //static variable is common for all objects.if for 1st object count=1, then for 2nd object it will be count=2 and so on
    //bydefault value of static variable is 0.
    // static int count=100;       //we can't do like that, it will throw error
public:
    void getData()
    {
        cout << "Enter the id of emplyee" << endl;
        cin >> id;
        count++;
    }
    void setData();
    static void getcount()
    {
        cout << "value of count is " << count << endl; //static function can access only static variable

        // cout<<"value of id is "<<id<<endl;       //it will throw an error
    }
};
void employee ::setData()
{
    cout << "Id of employee number " << count << " is " << id << endl;
}

int employee ::count;                        //declaration of static data
// int employee ::count=100;                //we can set the value of static variable count here
int main()
{
    employee harry, jon, lisa;

    harry.getData();
    harry.setData();
    employee::getcount();

    jon.getData();
    jon.setData();
    employee::getcount();

    lisa.getData();
    lisa.setData();
    employee::getcount();

    return 0;
}