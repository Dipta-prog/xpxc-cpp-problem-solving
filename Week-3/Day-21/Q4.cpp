/*
https://codeforces.com/contest/1744/problem/D
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;

void solve()
{
    int n;
    cin >> n;

    long long int totalTwos = 0;
    vector<int> a;

    for (int i = 1; i <= n; i++)
    {
        int x = i;
        int y;
        cin >> y;

        int cnt = 0;
        int cnt2 = 0;

        while (y % 2 == 0)
        {
            cnt++;
            y /= 2;
        }

        while (x % 2 == 0)
        {
            cnt2++;
            x /= 2;
        }

        totalTwos += cnt;
        a.push_back(cnt2);
    }

    sort(a.rbegin(), a.rend());

    int cnt = 0;

    if (totalTwos >= n)
    {
        cout << 0 << "\n";
        return;
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 0)
                break;
            totalTwos += a[i];
            cnt++;
            if (totalTwos >= n)
                break;
        }
    }

    cout << ((totalTwos >= n) ? cnt : -1) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
