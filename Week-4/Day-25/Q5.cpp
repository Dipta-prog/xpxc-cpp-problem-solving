/*
https://codeforces.com/contest/1744/problem/A
*/
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i, n, q, a[55], p[55];
    cin >> q;
    string str;

    while (q--)
    {
        cin >> n;
        for (i = 1; i <= n; i++)
            cin >> a[i], p[a[i]] = 0;

        cin >> str;
        str = " " + str;
        int t = 0;
        for (i = 1; i <= n; i++)
        {
            if (p[a[i]] && p[a[i]] != (int)str[i])
            {
                t = 1;
                cout << "NO\n";
                break;
            }
            p[a[i]] = str[i];
        }
        if (t)
            continue;
        cout << "YES\n";
    }
    return 0;
}
