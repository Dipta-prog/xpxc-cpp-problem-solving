/*
https://codeforces.com/contest/1249/problem/A
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &i : a)
            cin >> i;

        sort(a.begin(), a.end());
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] == 1)
            {
                ans++;
                break;
            }
        }
        cout << ans << endl;
        cout << "\n";
    }
    return 0;
}
