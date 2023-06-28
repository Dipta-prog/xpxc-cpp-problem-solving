/*
https://codeforces.com/contest/1741/problem/C
*/
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 2e3 + 5;

int D(int i, int s, int n, int arr[])
{
    int o = i, tmp = i, f = 0;
    for (++i; i < n; i++)
    {
        f += arr[i];
        if (f == s)
        {
            f = 0;
            o = max(o, i - tmp);
            tmp = i;
        }
        else if (f > s)
            return 1e9;
    }
    return f + arr[n] != s ? 1e9 : max(o, n - tmp);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[N];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int ans = 1e9, x = 0;
        for (int i = 1; i < n; i++)
        {
            x += arr[i];
            ans = min(ans, D(i, x, n, arr));
        }
        cout << min(ans, n) << "\n";
    }
    return 0;
}
