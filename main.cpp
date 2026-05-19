#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include  "numbergame.h"
#include  "wordgame.h"

using namespace std;



int main ()
{

    char back;
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
            while (  back != 'b' && back != 'B' )
            {
                cout<<"Hello!!"<<endl;
                cout<<"This is my first mini game project."<<endl;
                cout<<"for now you can play: "<<endl;
                cout<<"-Guess the number."<<endl;
                cout<<"-Guess the word."<<endl;
                cout<<"\n I will be adding the updates. "<<endl;
                cout<<"\n";
                cout<<"\n";
                cout<<"\n";
                cout<<"\n";
                cout<<"\n";
                cout<<"for any feed back you can connect with me at :"<<endl;
                cout<<"gmail: vasaiyashashank@gmail.com"<<endl;


                cout<<"\nPress 'b' or 'B' to go back to main menu.";
                cin>>back;
            }


        case 4 :
            cout<<"Exiting............."<<endl;
            break;

        default:
            cout<<"Invalid"<<endl;
            break;
        }
    } while (choice != 4);
    return 0;
}