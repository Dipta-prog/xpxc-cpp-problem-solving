/*
https://codeforces.com/contest/1800/problem/D
*/
#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 1;
    for (int i = 2; i < n; i++)
        if (s[i] != s[i - 2])
            ans++;

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
