/*
https://codeforces.com/contest/1729/problem/A
*/
#include <iostream>
using namespace std;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a == 1)
        cout << 1 << '\n';
    else
    {
        long long x, y;
        x = a - 1;
        if (b < c)
            y = (abs(b - c) * 2) + (b - 1);
        else
            y = abs(b - c) + (c - 1);
        if (x < y)
            cout << 1 << '\n';
        else if (y < x)
            cout << 2 << '\n';
        else
            cout << 3 << '\n';
    }
}

int main()
{
    long long t;
    t = 1;
    cin >> t;
    for (long long cs = 1; cs <= t; cs++)
        solve();

    return 0;
}
