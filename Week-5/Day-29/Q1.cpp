/*
https://codeforces.com/contest/1729/problem/A
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if (c > b)
        {
            if (a - 1 < abs(c - b) + c - 1)
                cout << 1 << "\n";
            else if (a - 1 > abs(c - b) + c - 1)
                cout << 2 << "\n";
            else
                cout << 3 << "\n";
        }
        else
        {
            if (a < b)
                cout << 1 << "\n";
            else if (b < a)
                cout << 2 << "\n";
            else
                cout << 3 << "\n";
        }
    }
}
