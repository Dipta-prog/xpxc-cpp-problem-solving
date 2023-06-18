/*
https://codeforces.com/contest/1722/problem/D
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            v.push_back(n - i - 1 - i);
            sum += i;
        }
        else
        {
            v.push_back(i - (n - i - 1));
            sum += n - i - 1;
        }
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
            sum += v[i];

        cout << sum << " ";
    }

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
