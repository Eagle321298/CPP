#include <iostream>
using namespace std;
int score=0;
class game
{   public:
    game()
    {   score++;
        cout<<"score of player1 after winning 1st roundis "<<score<<endl;
    }
    ~game()
    {
        score--;
        cout<<"score after every single cheating "<<score<<endl;
    }
};
int main()
{
    game n1;
 
   return 0;
}