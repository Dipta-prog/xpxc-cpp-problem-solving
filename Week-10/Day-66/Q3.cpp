/* https://codeforces.com/contest/1602/problem/A */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    char me = 'z';

    for (auto c : s)
        if (c < me)
            me = c;

    string b;
    int count = 0;

    for (auto c : s)
    {
        if (c != me || count)
            b += c;
        else
            ++count;
    }

    cout << me << " " << b << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;

    while (t--)
        solve();
}
