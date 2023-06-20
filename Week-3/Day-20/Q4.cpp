/*
https://codeforces.com/contest/1800/problem/C2
*/
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long int res = 0;
    priority_queue<long long int> q;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;

        if (a == 0 && q.size() != 0)
        {
            res += q.top();
            q.pop();
        }
        else
            q.push(a);
    }

    cout << res << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
