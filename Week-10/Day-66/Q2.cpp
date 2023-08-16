/* https://codeforces.com/contest/1582/problem/B */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> x;
            if (x == 0)
                cnt0++;
            if (x == 1)
                cnt1++;
        }
        cout << (long long)pow(2, cnt0) * cnt1 << '\n';
    }
    return 0;
}
