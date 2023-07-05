/*
https://codeforces.com/contest/1675/problem/A
*/
#include <iostream>
using namespace std;

void solve()
{
    long long n, c, d, b, a, x, y;
    string s;
    cin >> a >> b >> c >> x >> y;
    a -= x;
    b -= y;
    if (a < 0)
        c += a;
    if (b < 0)
        c += b;
    if (c >= 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;

    while (t--)
        solve();
}
