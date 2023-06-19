/*
https://codeforces.com/contest/1790/problem/D
*/
#include <bits/stdc++.h>
using namespace std;

void run()
{
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for (auto &i : a)
        cin >> i;

    map<long long int, long long int> mp;
    for (auto &i : a)
        mp[i]++;

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    long long int ans = mp[a[0]];

    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] - a[i - 1] == 1)
        {
            if (mp[a[i]] - mp[a[i - 1]] > 0)
                ans += mp[a[i]] - mp[a[i - 1]];
        }
        else
            ans += mp[a[i]];
    }

    cout << ans << '\n';

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        run();

    return 0;
}
