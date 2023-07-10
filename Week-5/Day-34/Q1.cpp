/*
https://codeforces.com/contest/1629/problem/A
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, i, t, k, mk, x, first, second;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<long long int> a(n);
        vector<pair<long long int, long long int>> mk;
        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {
            cin >> x;
            mk.push_back({a[i], x});
        }

        sort(mk.begin(), mk.end());
        for (i = 0; i < n; i++)
        {
            if (k >= mk[i].first)
                k += mk[i].second;
        }
        cout << k << "\n";
    }
    return 0;
}
