/*
https://codeforces.com/contest/1703/problem/C
*/

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            string s;
            cin >> s;
            int m = a[i];
            for (int j = 0; j < y; j++)
            {
                if (s[j] == 'U')
                    (m == 0) ? m = 9 : m--;

                else if (s[j] == 'D')
                    (m == 9) ? m = 0 : m++;
            }
            v.push_back(m);
        }
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
    }
}
 */

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

        vector<int> a(n);
        vector<int> v;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            string s;
            cin >> s;
            int m = a[i];

            for (int j = 0; j < y; j++)
            {
                if (s[j] == 'U')
                    (m == 0) ? m = 9 : m--;
                else if (s[j] == 'D')
                    (m == 9) ? m = 0 : m++;
            }
            v.push_back(m);
        }

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
    }

    return 0;
}

