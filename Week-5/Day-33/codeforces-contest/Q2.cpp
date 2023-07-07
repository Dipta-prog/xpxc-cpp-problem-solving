/*
https://codeforces.com/contest/1846/problem/B
*/
#include <iostream>
#include <vector>
using namespace std;

bool checkWin(const vector<string> &board, char symbol)
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
            return true;
    }

    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
            return true;
    }

    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return true;

    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return true;

    return false;
}

string checkGameResult(const vector<string> &board)
{
    bool xWon = checkWin(board, 'X');
    bool oWon = checkWin(board, 'O');
    bool plusWon = checkWin(board, '+');

    if (xWon)
        return "X";
    else if (oWon)
        return "O";
    else if (plusWon)
        return "+";
    else
        return "DRAW";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<string> board(3);
        for (int i = 0; i < 3; i++)
            cin >> board[i];

        string result = checkGameResult(board);
        cout << result << endl;
    }

    return 0;
}
