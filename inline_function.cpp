#include <iostream>
using namespace std;

inline int sum(int a,int b)             //inline function is used to reduce overhead of function call, if execution time of function is lesser than switching time from caller function to callee function
// https://www.geeksforgeeks.org/inline-functions-cpp/
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Ente the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    
   return 0;
}