/*
https://codeforces.com/contest/1729/problem/C
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> arr(26);
    for (int i = 0; i < 26; ++i)
        arr[i] = i + 1;

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = (int)s.size();

        int s0 = (int)s[0] - 97, sn = (int)s[n - 1] - 97;
        int cost = abs(arr[s0] - arr[sn]);
        int hi = max(arr[s0], arr[sn]), lo = min(arr[s0], arr[sn]);

        vector<pair<int, int>> between;
        for (int i = 0; i < n; ++i)
        {
            if (i == 0 or i == n - 1)
                continue;

            int x = (int)s[i] - 97;
            if (arr[x] >= lo and arr[x] <= hi)
                between.push_back(make_pair(arr[x], i + 1));
        }
        (arr[s0] > arr[sn]) ? sort(between.rbegin(), between.rend()) : sort(between.begin(), between.end());

        cout << cost << " " << 2 + between.size() << "\n";
        cout << 1 << " ";
        for (auto &x : between)
            cout << x.second << " ";

        cout << n << "\n";
    }
    return 0;
}
