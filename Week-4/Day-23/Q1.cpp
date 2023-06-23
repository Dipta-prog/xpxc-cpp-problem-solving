/*
https://codeforces.com/contest/1843/problem/A
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int l = 0, r = n - 1;
    long long int ans = 0;
    while (l < r)
    {
        ans += (arr[r] - arr[l]);
        l++, r--;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
