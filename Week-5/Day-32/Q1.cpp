/*
https://codeforces.com/contest/1674/problem/A
*/
#include <iostream>
using namespace std;

void solve()
{
    long long int x, y;
    cin >> x >> y;

    if (y % x == 0)
    {
        cout << 1 << " " << y / x << "\n";
        return;
    }
    else
    {
        cout << 0 << " " << 0 << "\n";
        return;
    }
}

int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
