/*
https://codeforces.com/contest/1118/problem/B
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    long long int n, m, t, a=0, b=0, c=0, d=0, k;
    string f, s;
    cin >> n;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i & 1)
            c += v[i];
        else
            d += v[i];
    }
    k = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            c -= v[i];
        else
            d -= v[i];
        if (c + b == d + a)
            k++;
        if (i & 1)
            a += v[i];
        else
            b += v[i];
    }
    cout << k;
}
int t = 1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (t-- > 0)
    {
        solve();
    }
}
