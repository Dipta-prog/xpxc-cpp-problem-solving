/*
https://codeforces.com/contest/1790/problem/A
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    const string pi = "314159265358979323846264338327";

    while (t--)
    {
        string n;
        cin >> n;

        int count = 0;
        int i = 0;

        for (char c : n)
        {
            if (c == pi[i])
                count++;
            else
                break;

            i++;
        }

        cout << count << "\n";
    }

    return 0;
}
