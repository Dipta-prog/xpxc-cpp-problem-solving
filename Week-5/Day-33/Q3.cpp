/*
https://codeforces.com/contest/1618/problem/C
*/
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

void solve()
{
    long long n, i, gcd1 = 0, gcd2 = 0;
    cin >> n;
    vector<long long> as(n);
    for (i = 0; i < n; i++)
        cin >> as[i];
    for (i = 0; i < n; i++)
    {
        if (i & 1)
            gcd1 = gcd(gcd1, as[i]);
        else
            gcd2 = gcd(gcd2, as[i]);
    }
    bool ok = 1, ok2 = 1;
    for (i = 0; i < n; i++)
    {
        if (i & 1)
        {
            if (as[i] % gcd2 == 0)
                ok = 0;
        }
        else if (as[i] % gcd1 == 0)
            ok2 = 0;
    }
    if (ok)
        cout << gcd2 << "\n";
    else if (ok2)
        cout << gcd1 << "\n";
    else
        cout << 0 << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cout << setprecision(15);
    int t;
    cin >> t;
    while (t--)
        solve();
}
