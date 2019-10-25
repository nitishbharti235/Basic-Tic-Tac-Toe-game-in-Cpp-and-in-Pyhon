#include <iostream>
#include<bits/stdc++.h>
using namespace std;

char square[10];

int checkwin();
void Initialize_Board();
void Display_Board();

int main()
{
	int player = 1,i,choice,sum1=0,sum2=0,c=0,x;
    char mark;
    cout << "\n\n\tTic Tac Toe\n\n";
    while(1)
    {
        Initialize_Board();
        if(c%2==0)
            player=2;
        else
            player=1;
        do
        {
        player=(player%2)+1;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
        else
        {
            cout<<"Invalid move \n\n";
            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();
        Display_Board();
    }while(i==-1);
    
    if(i==1)
        {
            int k=--player;
            cout<<"==>\aPlayer "<<k<<" win "<<endl<<endl;
            if(k==1)
                sum1++;
            else
                sum2++;
        }
    else
        cout<<"==>\aGame draw"<<endl<<endl;
     cout<<"Current Score: PLAYER 1 = "<<sum1<<"     "<<"PLAYER 2 = "<<sum2<<endl<<endl;
     cout<<"Enter 1 to play more : Enter 0 to stop :";
     cin>>x;
     if(x==0)
        break;
     c++;
    
    }
    cout<<"Final score : Player 1 = "<<sum1<<"        Player 2 = "<<sum2<<endl<<endl;
    return 0;
}

// -1 if game is in progress
//  0 if draw
//  1 if someone won

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}


void Initialize_Board()
{
    
    square[1]='1',square[2]='2',square[3]='3',square[4]='4',square[5]='5',square[6]='6',square[7]='7',square[8]='8',square[9]='9';
        
    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}
char sq(int i)
{
    if(square[i]=='X' || square[i]=='O')
        return square[i];
    else
        return ' ';
}
void Display_Board()
{

    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << sq(1) << "  |  " << sq(2) << "  |  " << sq(3) << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << sq(4) << "  |  " << sq(5) << "  |  " << sq(6) << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << sq(7) << "  |  " << sq(8) << "  |  " << sq(9) << endl;

    cout << "     |     |     " << endl << endl;
}
