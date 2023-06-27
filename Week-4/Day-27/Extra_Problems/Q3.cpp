/*
https://codeforces.com/problemset/problem/231/A
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int problemsImplemented = 0;
    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2)
            problemsImplemented++;
    }

    cout << problemsImplemented << "\n";

    return 0;
}
