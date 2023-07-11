/*
https://codeforces.com/contest/1798/problem/B
*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> order()
{
    int m;
    cin >> m;
    map<int, int> mp;
    vector<vector<int>> vec(m);
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            vec[i].push_back(x);
            mp[x]++;
        }
    }

    vector<int> ans;
    bool k = 0;
    for (int i = 0; i < m; i++)
    {
        k = 0;
        for (auto j : vec[i])
        {
            mp[j]--;
            if (mp[j] == 0 && !k)
            {
                k = 1;
                ans.push_back(j);
            }
        }
        if (!k)
            return {-1};
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t-- > 0)
    {
        auto x = order();
        for (auto i : x)
            cout << i << " ";

        cout << '\n';
    }
}
