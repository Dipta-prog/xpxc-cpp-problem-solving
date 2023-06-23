/*
https://codeforces.com/contest/1843/problem/C
*/
#include <iostream>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;

    long long int ans = 0;
    while (n > 0)
    {
        ans += n;
        n /= 2;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
