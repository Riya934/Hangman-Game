
#include <iostream>
#include <stdlib.h>
#include<fstream>
using namespace std;

int pointSystem(char puzzWord[], char guessWord[], int length)
{
    int j, k, l, m, flag;
    int point = 0;
    char temp;
    int chances = 10;
    int flag2;
    int chancesLeft;
    for (j = 0; j <= 10;)
    {
        flag = 0;
        cin >> temp;
        for (k = 0; k < length; k++)
        {
            if (temp == puzzWord[k])
            {
                guessWord[k] = temp;
                flag++;
            }
        }
        if (flag == 0)
        {
            j++;
        }
        //Displaying Score
        chancesLeft = chances - j;

        if (chancesLeft == 10)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }
        if (chancesLeft == 9)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|   _______________   |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }
        if (chancesLeft == 8)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    _|__________     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }
        if (chancesLeft == 7)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      ______         |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    _|__________     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }
        if (chancesLeft == 6)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      ______         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    _|__________     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }
        if (chancesLeft == 5)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      ______         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    _|__________     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }
        if (chancesLeft == 4)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      ______         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    _|__________     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }
        if (chancesLeft == 3)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      ______         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |     /|        |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    _|__________     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }
        if (chancesLeft == 2)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      ______         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |     /|\\       |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    _|__________     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }
        if (chancesLeft == 1)
        {
            system("CLS");
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      ______         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |     /|\\       |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |     /         |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    _|__________     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            for (l = 0; l < length; l++)
            {
                cout << guessWord[l] << " ";
            }
            cout << "\n";
            
        }

        flag2 = 0;
        for (m = 0; m < length; m++)
        {
            if (puzzWord[m] != guessWord[m])
            {
                flag2++;
            }
        }

        if (flag2 == 0)
        {
            point = chancesLeft;
            return point;
        }

        if (chancesLeft == 0)
        {
            system("CLS");
            cout << "Player 2 loses this round " << endl;
            cout << " _____________________ " << endl;
            cout << "|                     |" << endl;
            cout << "|                     |" << endl;
            cout << "|      ______         |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |      O        |" << endl;
            cout << "|     |     /|\\       |" << endl;
            cout << "|     |      |        |" << endl;
            cout << "|     |     / \\       |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|     |               |" << endl;
            cout << "|    _|__________     |" << endl;
            cout << "|                     |" << endl;
            cout << "|_____________________|" << endl;

            cout << "The Correct Answer is \n";

            for (l = 0; l < length; l++)
            {
                cout << puzzWord[l] << " ";
            }
            cout << "\n";
            
        }
    }
    return point;
}

class Player
{
   public: char name[20];
};

int main()
{
  ifstream in;
  string str1;
  string str2;
  string str3;
  string str4;
  string str5;
  string str6;
  string str7;
  string str8;
  string str9;
  string str10;
  in.open("instructions.txt");
  if(!in)
  {
    cout<<"file does not exist \n";
    return 1;
  }
  getline(in,str1);
  getline(in,str2);
  getline(in,str3);
  getline(in,str4);
  getline(in,str5);
  getline(in,str6);
  getline(in,str7);
  getline(in,str8);
  getline(in,str9);
  getline(in,str10);cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<"\n"<<str5<<"\n"<<str6<<"\n"<<str7<<"\n"<<str8<<"\n"<<str9<<"\n"<<str10<<endl;
    while (1)
    {
        cout << "************************************************************ WELCOME TO HANGMAN GAME ************************************************************" << endl;
        Player Player1;
        Player Player2;

        cout << "Enter the name of player 1" << endl;
        cin >> Player1.name;
        cout << "Enter the name of player 2" << endl;
        cin >> Player2.name;
        int rounds;
        cout << "Enter the number of rounds\n";
        cin >> rounds;

        char puzzWord[50];
        char guessWord[50];

        int i, m = 0;
        int reset;

        int length;

        int point1 = 0;
        int point2 = 0;

        for (i = 1; i <= rounds; i++)
        {
            length = 0;
            m = 0;
            cout << "Player 1 enter the puzzle word\n";
            cin >> puzzWord;
            system("CLS");

            for (reset = 0; reset < 50; reset++)
            {
                guessWord[reset] = '_';
            }

            while (puzzWord[m] != '\0')
            {
                length++;
                m++;
            }
            cout << "Player 2 turn to guess the puzzle word\n";
            point2 = point2 + pointSystem(puzzWord, guessWord, length);

            length = 0;
            m = 0;

            cout << "Player 2 enter the puzzle word\n";
            cin >> puzzWord;
            system("CLS");
            for (reset = 0; reset < 50; reset++)
            {
                guessWord[reset] = '_';
            }
            while (puzzWord[m] != '\0')
            {
                length++;
                m++;
            }
            cout << "Player 1 turn to guess the puzzle word\n";
            point1 = point1 + pointSystem(puzzWord, guessWord, length);
        }

        cout << "Player 1 points " << point1 << endl;
        cout << "Player 2 points " << point2 << endl;

        if (point2 > point1)
        {
            cout<<Player2.name <<" wins \n";
        }
        else if(point1>point2)
        {
            cout<<Player1.name << " wins \n";
        }
        else
        {
            cout<<"GAME TIED !!!\n";
        }
        
    }
    return 0;
}


