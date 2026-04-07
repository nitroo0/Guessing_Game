#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand (time(0));


    int secret = rand() %100 +1;  // to shrink range to the required range
    int guess;
    int trials = 7;

    cout<<"Guess a number between 1  and 100."<<endl;
    cout<<"Tip: keep dividing or doubling your guessed number."<<endl;

   while (trials > 0)
   {
       cin>>guess;
       if (guess < 1 || guess> 100){
           cout<<"Choose a valid number,sport!"<<endl;
       }
       if (guess == secret)
       {
           cout<<"Bingo! You got it correct."<<endl;
           break;
       }
       else if (guess < secret)
       {
           cout<<"Your guessed number is lower. "<<endl;
       }
       else
       {
           cout<<"Your guessed number is higher. "<<endl;
       }
       trials--;
       cout<<"Trials : "<<trials<<endl;

       if (trials == 0)
       {
           cout<<"Sorry! You used all of your trials. Try again. "<<endl;
           break;
       }
   }
    return 0;
}