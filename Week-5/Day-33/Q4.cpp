/*
https://codeforces.com/contest/1618/problem/A
*/
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    vector<long long> a(7);
    for (auto &x : a)
        cin >> x;
    cout << a[0] << " " << a[1] << " " << a[6] - a[0] - a[1] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
