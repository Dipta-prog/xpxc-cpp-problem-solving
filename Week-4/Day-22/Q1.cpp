/*
https://www.codechef.com/problems/BOX95
*/
#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        vector<long long int> a(n);
        for (long long int i = 0; i < n; i++)
            cin >> a[i];

        long long int ans = 1;
        sort(a.rbegin(), a.rend());
        long long int exor_or = a[0];
        long long int i = 0;
        long long int j = n - 1;

        while (i < j)
        {
            if (exor_or >= a[j])
            {
                exor_or ^= a[j];
                j--;
            }
            else
            {
                ans++;
                exor_or = a[i];
                i++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
