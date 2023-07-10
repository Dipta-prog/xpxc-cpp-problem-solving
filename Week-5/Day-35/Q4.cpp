/*
https://codeforces.com/contest/1272/problem/B
*/
#include <iostream>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int mp[4] = {0};

    for (auto &e : s)
    {
        switch (e)
        {
        case 'L':
            mp[0]++;
            break;
        case 'R':
            mp[1]++;
            break;
        case 'U':
            mp[2]++;
            break;
        case 'D':
            mp[3]++;
            break;
        }
    }

    mp[0] = mp[1] = min(mp[0], mp[1]);
    mp[2] = mp[3] = min(mp[2], mp[3]);

    if (!mp[0] && mp[2])
        mp[2] = mp[3] = 1;
    else if (!mp[2] && mp[0])
        mp[0] = mp[1] = 1;
    string ans = string(mp[1], 'R') + string(mp[3], 'D') + string(mp[0], 'L') + string(mp[2], 'U');
    cout << ans.size() << endl
         << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
