//
// Created by Nitroo on 5/16/2026.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <set>
#include "wordgame.h"

using namespace std;

void guessword()
{


    ifstream ifs("words.txt");
    vector<string> words;
    string word;
    set<string> uniquewords;
    string guess;
   string target;

    if (!ifs.is_open())
    {
        cout<<"File failed to open!"<<endl;
        return;
    }

    while (ifs>>word)
    {
        uniquewords.insert(word);
    }
    ifs.close();

    for (string w : uniquewords)
    {
        words.push_back(w);
    }


    if (words.empty()) // for preventing ( rand() /0 ) catastrophe.
    {
        return;
    }


    int diff;
    do
    {
        cout<<"Choose the difficulty:"<<endl;
        cout<<"1. -difficulty one\n";
        cout<<"2.-difficulty two\n";
        cout<<"\n";
        cout<<"\n";
        cout<<"Pick your poison : ";
        cin>>diff;
    }
    while (diff < 1 || diff > 2);

    srand(time(0)); // setting seed as current time
    int size = words.size();

    int simil = 0;


    char c;
    while (c != 'n' && c != 'N')
    {
        target = words[rand() % size];


        int tsize = target.size();

        switch (diff)
        {
        case 1 :
            cout<<"Guess the word."<<endl;
            cout<<"The word you have to guess is "<<tsize<<" letter long. "<<endl;
            cout<<" And if you ever get stuck , write 'giveup' "<<endl;
            while (true)
            {
                cin>>guess;

                if (guess == target )
                {
                    cout<<"Bingo! You got the correct word."<<endl;
                    break;
                }
                if (guess == "giveup")
                {
                    cout<<target<<endl;
                    break;
                }
                else
                {
                    for(int i = 0; i < target.size(); i++)
                    {

                        if (guess[i] == target[i])
                        {
                            cout<<guess[i];
                        }

                        else
                        {
                            cout<<"_";
                        }
                    }
                    cout<<endl;
                }
            }
            break;

            case 2 :
            cout<<"Guess the word."<<endl;
            cout<<"The word you have to guess is "<<tsize<<" letter long. "<<endl;
            cout<<" And if you ever get stuck , write 'giveup' "<<endl;

            while (true)
            {
                cin>>guess;
                if (guess == target )
                {
                    cout<<"Bingo! You got the correct word."<<endl;
                    break;
                }
                if (guess == "giveup")
                {
                    cout<<target<<endl;
                    break;
                }
                else
                {
                    for (int i = 0; i < target.size(); i++)
                    {
                        if (guess[i] == target[i])
                        {
                            simil++;
                        }
                    }
                    cout<<"Total amount of letters you have guessed correct is : "<<simil<<endl;
                    simil = 0;
                }
            }



        }
        cout<<"Do you wanna play again?"<<endl;
        cout<<"y/n"<<endl;
        cin>>c;
    }


}