/*
https://codeforces.com/problemset/problem/1604/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        int a[n + 4];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        long long int result = a[1] - 1;
        long long int idx = result;
        for (int i = 2; i <= n; i++)
        {
            if (idx + i < a[i])
            {
                long long int remaining = a[i] - (idx + i);
                idx += remaining;
                result += remaining;
            }
        }
        cout << result << endl;
    }

    return 0;
}