/*
https://codeforces.com/contest/1840/problem/C
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void ski_resort()
{

    ll int n, k, q;
    cin >> n >> k >> q;

    ll int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll int c = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= q)
        {
            c++;
            if (i == n - 1 or a[i + 1] > q)
            {
                if (c >= k)
                {
                    ll x = c - k + 1;
                    ll add = (x * (x + 1LL)) / 2LL;
                    ans += add;
                }
                c = 0;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    for (int z = 1; z <= t; z++)
    {

        ski_resort();
    }
    return 0;
}