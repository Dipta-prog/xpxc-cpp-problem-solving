/*
https://codeforces.com/contest/1714/problem/B
*/
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll fr[n + 1];
        memset(fr, 0, sizeof(fr));

        queue<ll> q;
        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            fr[a]++;
            q.push(a);
        }

        ll i = 1;
        while (!q.empty())
        {
            if (fr[q.front()] > 1)
                ans = i;

            fr[q.front()]--;
            q.pop();
            i++;
        }

        cout << ans << endl;
    }

    return 0;
}
