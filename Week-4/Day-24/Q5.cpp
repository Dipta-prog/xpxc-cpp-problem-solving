/*
https://codeforces.com/contest/1702/problem/C
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;

    while (test--)
    {
        int n, m;
        cin >> n >> m;

        map<long long int, long long int> mp;
        map<long long int, long long int> mp1;
        vector<pair<long long int, long long int>> v;

        for (int i = 1; i <= n; i++)
        {
            long long int a;
            cin >> a;

            if (mp[a] == 0)
                mp[a] = i;
            else
                mp1[a] = i;

            v.push_back({a, i});
        }

        for (int i = 0; i < m; i++)
        {
            long long int x, y;
            cin >> x >> y;

            if (mp[x] != 0 && mp[y] != 0 && mp[y] > mp[x])
                cout << "YES" << endl;
            else if (mp[x] != 0 && mp1[y] != 0 && mp1[y] > mp[x])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        mp.clear();
        mp1.clear();
    }

    return 0;
}
