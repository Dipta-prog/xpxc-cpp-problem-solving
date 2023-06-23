/*
https://codeforces.com/contest/1843/problem/C
*/
#include <iostream>
#include <vector>
using namespace std;
const int MAX_N = 2 * 10e5 + 5;

vector<int> g[MAX_N];
long long int N[MAX_N];

void dfs(long long int x, long long int y = -1)
{
    if (g[x].size() == 1 && x != 1)
        N[x] = 1;

    for (auto v : g[x])
    {
        if (v != y)
        {
            dfs(v, x);
            N[x] += N[v];
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int t, u, v, n, m;
    cin >> t;

    while (t--)
    {
        cin >> n;
        for (long long int i = 1; i <= n; i++)
        {
            g[i].clear();
            N[i] = 0;
        }

        for (long long int i = 1; i < n; i++)
        {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        dfs(1);
        cin >> m;

        while (m--)
        {
            long long int l, r;
            cin >> l >> r;
            cout << N[l] * N[r] << "\n";
        }
    }

    return 0;
}
