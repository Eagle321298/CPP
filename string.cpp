#include <iostream>
#include <string>
using namespace std;
int main()
{   int age=23;
    string name="Rutika bhuimbar , age",str1;
    cout<<"Name:"<<name<<endl;

    char str[100];
    cin.getline(str,100);     //user input for str
    cout<<"Name:"<<str<<endl;

    getline(cin,str1);     //user input for str1
    cout<<"Name:"<<str1<<endl;



    cout<<"Name:"<<" "<<name.length()<<endl;
    cout<<"Name:"<<" "<<name.substr(0,4)<<endl;
    cout<<"Name:"<<" "<<name.substr(0,9)<<endl;
    cout<<"Name:"<<" "<<name.substr(4,9)<<endl;

   return 0;
}