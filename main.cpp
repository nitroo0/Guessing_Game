#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void guessnumber()
{
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
}

void guessword()
{
    string guess;
    string word[] = {"gon", "kurapika", "killua", "hisoka", "leorio", "alluka", "illumi", "netero"};
    int size = sizeof(word)/sizeof(word[0]);

    int secret = rand() % size ;
    string target = word[secret];

    cout<<"Guess the word."<<endl;
    while (true)
    {
        cin>>guess;

        if (guess == target )
        {
            cout<<"Bingo! You got the correct word."<<endl;
            break;
        }
        else
        {
            cout<<"Not that. Try again."<<endl;
        }
    }
}
int main ()
{

    srand (time(0));

    int choice;
    do
    {
        do
        {
            cout<<"--------------Main Menu--------------"<<endl;
            cout<<" "<<endl;
            cout<<"1. Guess the number. "<<endl;
            cout<<"2. Guess the word."<<endl;
            cout<<"3. About the game."<<endl;
            cout<<"4. Quit."<<endl;

            cout<<"Enter your choice : "<<endl;
            cin>>choice;
        }
        while (choice < 1 || choice > 4);
        switch (choice)
        {
        case 1:
            guessnumber();
            break;

        case 2 :
            guessword();
            break;

        case 3 :
            cout<<"Hello!!"<<endl;
            cout<<"This is my first mini game project."<<endl;
            cout<<"for now you can play: "<<endl;
            cout<<"-Guess the number."<<endl;
            cout<<"-Guess the word."<<endl;
            cout<<"\n I will be adding the updates. "<<endl;
            break;

        default:
            cout<<"Invalid"<<endl;
            break;
        }
    } while (choice != 4);
    return 0;
}