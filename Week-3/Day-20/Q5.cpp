/*
https://codeforces.com/contest/1759/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    int m, s;
    cin >> t;

    while (t--)
    {
        cin >> m >> s;
        int mx = 0;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            s += x;
            mx = max(mx, x);
        }

        int sum = 0;
        int i = 1;
        for (i = 1; i <= 1000; i++)
        {
            sum += i;
            if (sum == s)
                break;
        }
        cout << ((sum != s || mx > i || mx < m) ? "NO" : "YES") << "\n";
    }
    return 0;
}
