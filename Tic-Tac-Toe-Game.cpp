#include <iostream>
#include <stdlib.h>
using namespace std;
char gameBoard[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char turn = 'X';
bool draw = false;
void displayBoard();
void playersTurn();
bool gameEnd();

int main()
{
    while (gameEnd())
    {
        displayBoard();
        playersTurn();
    }
    if (turn == 'X' && draw == false)
    {
        cout << "Player2[O] Wins !!!. Congratulations!!!";
    }
    else if (turn == 'O' && draw == false)
    {
        cout << "Player1[X] Wins !!!. Congratulations!!!";
    }
    else
    {
        cout << "Draw!!!";
    }

    return 0;
}

void displayBoard()
{
    system("cls");
    cout << "\n\t  Tic Tac Toe Game\n\n";
    cout << "Player[1] = 'X'\n";
    cout << "Player[2] = 'O'\n\n";
    cout << "\t      |      |\n";
    cout << "\t   " << gameBoard[0][0] << "  |  " << gameBoard[0][1] << "   |  " << gameBoard[0][2] << endl;
    cout << "\t _____|______|_____\n";
    cout << "\t      |      |  \n";
    cout << "\t   " << gameBoard[1][0] << "  |  " << gameBoard[1][1] << "   |  " << gameBoard[1][2] << endl;
    cout << "\t _____|______|_____\n";
    cout << "\t      |      |  \n";
    cout << "\t   " << gameBoard[2][0] << "  |  " << gameBoard[2][1] << "   |  " << gameBoard[2][2] << endl;
    cout << "\t      |      |  \n";
}

void playersTurn()
{
    if (turn == 'X')
    {
        cout << "\nPlayer1[X]'s Turn: ";
    }
    else if (turn == 'O')
    {
        cout << "\nPlayer2[O]'s Turn: ";
    }
    int choose, row, col;
    cin >> choose;
    switch (choose)
    {
    case 1:
        row = 0, col = 0;
        break;
    case 2:
        row = 0, col = 1;
        break;
    case 3:
        row = 0, col = 2;
        break;
    case 4:
        row = 1, col = 0;
        break;
    case 5:
        row = 1, col = 1;
        break;
    case 6:
        row = 1, col = 2;
        break;
    case 7:
        row = 2, col = 0;
        break;
    case 8:
        row = 2, col = 1;
        break;
    case 9:
        row = 2, col = 2;
        break;
    default:
        cout << "Invalid Choice!" << endl;
        break;
    }
    if (turn == 'X' && gameBoard[row][col] != 'X' && gameBoard[row][col] != 'O')
    {
        gameBoard[row][col] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && gameBoard[row][col] != 'X' && gameBoard[row][col] != 'O')
    {
        gameBoard[row][col] = 'O';
        turn = 'X';
    }
    else
    {
        cout << "Already filled!!! Please Try Again.";
    }
    displayBoard();
}
bool gameEnd()
{
    // Win
    for (int i = 0; i < 3; i++)
    {
        // For Rows and Coloumns
        if (gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][0] == gameBoard[i][2] || gameBoard[0][i] == gameBoard[1][i] && gameBoard[0][i] == gameBoard[2][i])
        {
            return false;
        }
        // Diagonal
        if (gameBoard[0][0] == gameBoard[1][1] && gameBoard[0][0] == gameBoard[2][2] || gameBoard[0][2] == gameBoard[1][1] && gameBoard[0][2] == gameBoard[2][0])
        {
            return false;
        }
    }

    // Continue
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (gameBoard[i][j] != 'X' && gameBoard[i][j] != 'O')
            {
                return true;
            }
        }
    }
    
    // Draw
    draw = true;
    return false;
}