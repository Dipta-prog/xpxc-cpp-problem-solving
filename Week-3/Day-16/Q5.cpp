/*
https://codeforces.com/contest/1692/problem/C
*/
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    char character[10][10];

    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
            cin >> character[i][j];

    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
            if (character[i][j] == '#' && character[i - 1][j - 1] == '#' && character[i - 1][j + 1] == '#' && character[i + 1][j - 1] == '#' && character[i + 1][j + 1] == '#')
            {
                cout << i << " " << j << '\n';
                return;
            }
}

int main()
{
    long long int t = 1;
    cin >> t;
    while (t--)
        solve();
}
