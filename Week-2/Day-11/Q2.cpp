/*
https://codeforces.com/contest/1676/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int sum = 0;
        int minElement = a[0];

        for (int i = 0; i < n; i++)
            sum += abs(minElement - a[i]);

        cout << sum << endl;
    }

    return 0;
}
