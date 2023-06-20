/*
https://codeforces.com/contest/1833/problem/A
*/
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

void solve()
{
    int n, ans = 0;
    string c;
    cin >> n >> c;

    unordered_set<string> substrings;

    for (size_t i = 0; i < c.size() - 1; i++)
    {
        string temp = c.substr(i, 2);
        if (substrings.count(temp) == 0)
        {
            ans++;
            substrings.insert(temp);
        }
    }

    cout << ans << '\n';
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
