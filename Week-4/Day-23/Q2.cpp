/*
https://codeforces.com/contest/1843/problem/B
*/
#include <iostream>
#include <vector>
using namespace std;

void solve()
{

    long long int n;
    cin >> n;
    long long int ans = 0;
    vector<long long int> arr(n);

    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans += abs(arr[i]);
    }

    long long int cnt = 0;
    bool flag = false;
    for (long long int i = 0; i < n; i++)
    {
        if (flag == false && arr[i] < 0)
        {
            cnt++;
            flag = true;
        }
        if (flag == true && arr[i] > 0)
            flag = false;
    }

    cout << ans << " " << cnt << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
        solve();
    return 0;
}
