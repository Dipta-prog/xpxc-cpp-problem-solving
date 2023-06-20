/*
https://codeforces.com/contest/1833/problem/B
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

const int mod = 1000000007;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> arr(n);
        
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = {x, i};
        }

        sort(arr.begin(), arr.end());
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(b.begin(), b.end());
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
            ans[arr[i].second] = b[i];

        for (auto i : ans)
            cout << i << " ";

        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
