/*
https://codeforces.com/contest/1790/problem/C
*/
/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int a[n + 1][n];
        for (int i = 1; i <= n; i++)
            for (int j = 0; j < n - 1; j++)
                cin >> a[i][j];

        long long int b = 0, c = 0, d, e;
        for (int i = 1; i <= n; i++)
        {
            if (a[i][0] == a[1][0])
                b++;
            else
            {
                c++;
                d = a[i][0];
            }
        }
        if (b > c)
        {
            e = a[1][0];
            cout << e << " ";
            for (int i = 1; i <= n; i++)
            {
                if (a[i][0] != e)
                {
                    for (int j = 0; j < n - 1; j++)
                        cout << a[i][j] << " ";
                    break;
                }
            }
        }
        else
        {
            e = d;
            cout << e << " ";
            for (int i = 1; i <= n; i++)
            {
                if (a[i][0] != e)
                {
                    for (int j = 0; j < n - 1; j++)
                        cout << a[i][j] << " ";
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
} */

//
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> a(n + 1, vector<int>(n - 1));

        for (int i = 1; i <= n; i++)
            for (int j = 0; j < n - 1; j++)
                cin >> a[i][j];

        int b = 0, c = 0, d = 0, e = 0;

        for (int i = 1; i <= n; i++)
        {
            if (a[i][0] == a[1][0])
                b++;
            else
            {
                c++;
                d = a[i][0];
            }
        }

        (b > c) ? e = a[1][0] : e = d;

        cout << e << " ";

        for (int i = 1; i <= n; i++)
            if (a[i][0] != e)
            {
                for (int j = 0; j < n - 1; j++)
                    cout << a[i][j] << " ";
                break;
            }

        cout << endl;
    }

    return 0;
}
