/*
https://codeforces.com/contest/1772/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool ok = ((a < b && c < d && a < c && b < d) ||
               (c < a && d < b && c < d && a < b) ||
               (d < c && b < a && d < b && c < a) ||
               (b < d && a < c && b < a && d < c));

    cout << (ok ? "YES\n" : "NO\n");
}

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
