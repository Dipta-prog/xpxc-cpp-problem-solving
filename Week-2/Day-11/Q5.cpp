/*
https://codeforces.com/contest/1722/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    long long int cnt = 0;
    for (long long int i = 0; i < n; i++)
    {
        if ((s[i] == 'R' && t[i] == 'R') || (s[i] == 'G' && t[i] == 'B') ||
            (s[i] == 'B' && t[i] == 'G') || (s[i] == 'G' && t[i] == 'G') ||
            (s[i] == 'B' && t[i] == 'B'))
        {
            cnt++;
        }
    }
    (cnt == n) ? cout << "YES\n" : cout << "NO\n";
}

signed main()
{
    long long int test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}
