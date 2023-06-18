/*
https://codeforces.com/contest/1676/problem/D
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<long long>> a(n, vector<long long>(m));
        long long sum, ans = INT_MIN;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                sum = a[i][j];
                int p = i, q = j;

                p--, q--;
                while (p >= 0 && q >= 0)
                {
                    sum += a[p][q];
                    p--, q--;
                }

                p = i, q = j;
                p++, q--;
                while (p < n && q >= 0)
                {
                    sum += a[p][q];
                    p++, q--;
                }

                p = i, q = j;
                p--, q++;
                while (p >= 0 && q < m)
                {
                    sum += a[p][q];
                    p--, q++;
                }

                p = i, q = j;
                p++, q++;
                while (p < n && q < m)
                {
                    sum += a[p][q];
                    p++, q++;
                }

                ans = max(ans, sum);
            }

        cout << ans << '\n';
    }

    return 0;
}
