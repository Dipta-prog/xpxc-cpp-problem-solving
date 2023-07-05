/*

*/
#include <iostream>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

int main()
{
    cin.tie(NULL);
    ;
    long long int t, n, total = 0, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int c = 0, m = 0;
        long long int d = 0;
        vector<long long int> a(n), b(n), diff(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            diff[i] = a[i] - b[i];
        }
        x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (diff[i] < 0)
            {
                y = 1;
                break;
            }
            if (i == 0)
                d = diff[0];

            if (diff[i] == d)
            {
                if (b[i] > 0)
                    x = 1;
                continue;
            }

            if (b[i] == 0)
            {
                if (!x)
                    d = max(d, diff[i]);
                if (diff[i] <= d)
                    d = d;
                else
                    y = 1;
            }
            else if (!x && diff[i] > d)
            {
                d = diff[i];
                x = 1;
            }
            else
                y = 1;
            if (y)
                break;
        }
        y ? cout << "NO"
                 << "\n"
          : cout << "YES"
                 << "\n";
    }
}
