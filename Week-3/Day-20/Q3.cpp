/*
https://codeforces.com/contest/1800/problem/C1
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    priority_queue<int> pq;
    int ans = 0;
    int n;
    cin >> n;
    
    vector<int> s(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i])
            pq.push(s[i]);

        else
        {
            if (!pq.empty())
            {
                int x = pq.top();
                pq.pop();
                ans += x;
            }
        }
    }
    cout << ans << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
