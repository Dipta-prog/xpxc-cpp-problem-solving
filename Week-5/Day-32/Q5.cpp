/*
https://codeforces.com/contest/1690/problem/D
*/
#include <iostream>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a = 0, b = k - 1;
    int cw = 0, cb = 0;
    for (int i = a; i <= b; ++i)
    {
        cw += (s[i] == 'W');
        cb += (s[i] == 'B');
    }
    int ans = cw;
    ++a;
    ++b;
    while (b < n)
    {
        if (s[b] == 'W')
            ++cw;
        else
            ++cb;
        if (s[a - 1] == 'W')
            --cw;
        else
            --cb;
        ans = min(ans, cw);
        ++a;
        ++b;
    }
    cout << ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}
