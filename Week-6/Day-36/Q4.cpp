/*
https://codeforces.com/contest/1343/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        if ((n / 2) % 2)
        {
            cout << "NO"
                 << "\n";
            continue;
        }

        cout << "YES"
             << "\n";

        vector<int> a(n / 2), b(n / 2 - 1);
        int x = 0;

        for (int i = 0; i < n / 2; i++)
        {
            a[i] = (x + 2);
            x += 2;
            cout << a[i] << ' ';
        }
        x = 0;

        for (int i = 0; i < n / 2 - 1; i++)
        {
            b[i] = x + 1;
            x += 2;
            cout << b[i] << ' ';
        }

        int A = accumulate(a.begin(), a.end(), 0);
        int B = accumulate(b.begin(), b.end(), 0);
        cout << A - B << "\n";
    }
}
