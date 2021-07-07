// The way memory is allocated to variables and functions of the class is different even though they both are from the same class.

// The memory is only allocated to the variables of the class when the object is created. The memory is not allocated to the variables when the class is declared. At the same time, single variables can have different values for different objects, so every object has an individual copy of all the variables of the class. But the memory is allocated to the function only once when the class is declared. So the objects don’t have individual copies of functions only one copy is shared among each object.

#include <iostream>
using namespace std;

class Dmart
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initial() { counter = 1; }
    void setprice();
    void display();
};

void Dmart::setprice()
{
    cout << "Enter id and price of item no." << counter << endl;
    cin >> itemid[counter];
    cin >> itemprice[counter];
    counter++;
}
void Dmart ::display()
{
    for (int i = 1; i < counter; i++)
    {
        cout << "Price and id of item " << i << " is " << itemprice[i] << " and " << itemid[i] << endl;
    }
}
int main()
{
    class Dmart shop1;
    shop1.initial();
    shop1.setprice();
    shop1.setprice();
    shop1.setprice();
    shop1.setprice();
    shop1.display();

    return 0;
}