#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void SetData(int a, float b)
    {
        id = a;
        price = b;
    }
    void GetData()
    {
        cout << "Code of item is " << id << endl
             << "Price of item is " << price << endl;
    }
};

// 1. general store item
// 2. veggies item
// 3. hardware item

int main()
{   int size=3;                         //three objects
    int p;
    float q;
    Shop *ptr=new Shop[size];           //dynamic allocation
    Shop *ptrtemp=ptr;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter code and price of item no. "<<i+1<<" :"<<endl;
        cin>>p>>q;
        ptr->SetData(p,q);
        ptr++;
    }

//  1  2  3
//           ^
//           |
//           |
//           ptr
//
//after first for loop ptr get out of the no. of object 
//to print setdata we used ptrtemp which is at initial point 

    for (int i = 0; i < size; i++)
    {
        cout<<"Item no. "<<i+1<<endl;
        ptrtemp->GetData();
        ptrtemp++;
    }
    return 0;
}