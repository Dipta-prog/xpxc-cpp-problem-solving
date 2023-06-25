/*
https://codeforces.com/contest/1702/problem/B
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solve()
{
    string str;
    cin >> str;

    int ans = 1, rem = 0;
    vector<bool> alpha(26, false);
    for (char c : str)
    {
        if (!alpha[c - 'a'])
        {
            alpha[c - 'a'] = true;
            rem++;
        }

        if (rem > 3)
        {
            ans++;
            alpha = vector<bool>(26, false);
            alpha[c - 'a'] = true;
            rem = 1;
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        cout << solve() << "\n";

    return 0;
}
