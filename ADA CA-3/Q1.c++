/*Imagine you've successfully placed 4 queens on a chessboard. you try to place the 5th queen in the same row as the first queen. if it's possible the 5th queen is placed at the row of 1st queen else give a message.*/

#include <iostream>
using namespace std;
bool isSafe(int chessboard[8][8], int row, int col)
{
    for (int i = 0; i < row; i++) // column check
    {
        if (chessboard[i][col] == 1)
            return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) // Upper left diagonal check
    {
        if (chessboard[i][j] == 1)
            return false;
    }
    for (int i = row, j = col; i >= 0 && j < 8; i--, j++) // Upper right diagonal check
    {
        if (chessboard[i][j] == 1)
            return false;
    }
    return true;
}
// Function to print the chessboard after placing the queens
void printChessboard(int chessboard[8][8])
{
    cout << "Current state of the chessboard:" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == 1)
                cout << "Q ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    // Initialize an empty chessboard (all positions are 0
    int chessboard[8][8] = {0};
    // Place the first 6 queens at the given positions
    chessboard[0][0] = 1; // (1,1)
    chessboard[1][2] = 1; // (2,3)
    chessboard[2][4] = 1; // (3,5)
    chessboard[3][6] = 1; // (4,7)
    chessboard[4][1] = 1; // (5,2)
    chessboard[5][3] = 1; // (6,4)
    bool queenPlaced = false;
    for (int col = 0; col < 8; col++)
    {
        if (isSafe(chessboard, 6, col))
        {
            // Check if placing queen in column 'col' is safe
            chessboard[6][col] = 1; // Place the queen at row 7
            queenPlaced = true;
            cout << "The 7th queen can be placed at position: (7, " << col + 1 << ")" << endl;
            break;
        }
    }
    if (!queenPlaced)
    {
        cout << "It is not possible to place the 7th queen in the 7th row without conflict." << endl;
    }
    else
    {
        printChessboard(chessboard);
    }

    return 0;
}