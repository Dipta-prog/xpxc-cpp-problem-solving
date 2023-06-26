/*
https://codeforces.com/contest/1772/problem/C
*/
#include <iostream>
using namespace std;

void solve()
{
    long long n, k, diff, i, j;
    cin >> k >> n;
    j = 1, diff = 1;

    for (i = 1; i <= k; i++)
    {
        cout << j << " ";
        if (n - (j + diff) >= (k - i - 1))
        {
            j = j + diff;
            diff++;
        }
        else
            j++;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
        
    return 0;
}
