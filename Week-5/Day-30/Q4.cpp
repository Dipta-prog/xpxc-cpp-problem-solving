/*
https://codeforces.com/contest/1702/problem/C
*/
#include <iostream>
#include <map>
using namespace std;

void solve()
{
    const long long N = 2e3 + 5, INF = 0x3f3f3f3f, base = 1e12 + 1;
    long long t, n, m;
    string second;
    cin >> n >> m;
    map<int, pair<int, int>> e;
    e.clear();
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (e.count(x))
            e[x].second = i;
        else
            e[x].first = i, e[x].second = i;
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        if (!e.count(a) || !e.count(b))
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        if (e[a].first < e[b].second)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
