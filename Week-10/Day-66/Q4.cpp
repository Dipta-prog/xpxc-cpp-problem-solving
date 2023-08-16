/* https://codeforces.com/contest/1602/problem/B */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> ini(n), pnp;
        for (int i = 0; i < n; i++)
            cin >> ini[i];

        vector<vector<long long>> aa;
        aa.push_back(ini);

        map<long long, long long> mp;
        while (true)
        {
            pnp = ini;
            for (int i = 0; i < n; i++)
                mp[ini[i]]++;
            for (int i = 0; i < n; i++)
            {
                ini[i] = mp[ini[i]];
            }
            aa.push_back(ini);
            mp.clear();
            if (ini == pnp)
                break;
        }

        long long mx = aa.size() - 1;

        long long q, u, p;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            cin >> u >> p;
            if (p > mx)
                p = mx;
            cout << aa[p][u - 1] << endl;
        }
    }

    return 0;
}
