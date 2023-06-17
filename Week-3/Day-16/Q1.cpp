/*
https://codeforces.com/contest/1692/problem/A
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    vector<int> m(4);

    for (int i = 0; i < 4; i++)
        cin >> m[i];

    int cnt = count_if(m.begin() + 1, m.end(), [&](int x)
                       { return x > m[0]; });
    cout << cnt << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
