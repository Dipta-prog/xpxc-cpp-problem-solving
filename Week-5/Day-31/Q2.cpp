/*
https://codeforces.com/contest/1690/problem/C
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> s(n), f(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++)
        cin >> f[i];

    if (n == 1)
    {
        cout << f[0] - s[0] << "\n";
        return;
    }
    int start = 0, end = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            start = s[i];
            end = f[i];
        }
        else
        {
            start = max(end, s[i]);
            end = f[i];
        }
        cout << end - start << " ";
    }
    cout << "\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;

    while (t--)
        solve();
    return 0;
}
