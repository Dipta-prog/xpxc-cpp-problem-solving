/*
https://codeforces.com/contest/1234/problem/A
*/
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, tot = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int cost;
            cin >> cost;
            tot += cost;
        }

        (tot % n == 0) ? cout << tot / n << "\n" : cout << tot / n + 1 << "\n";
    }
}
