/*
https://codeforces.com/contest/1702/problem/D
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p;
        string s;
        cin >> s >> p;
        vector<int> v1(s.size());
        vector<pair<int, int>> v;
        int sum = 0;
        for (int j = 0; j < s.size(); j++)
        {
            int x = s[j] - 'a' + 1;
            sum = sum + x;
            v.push_back({x, j});
        }
        if (sum <= p)
        {
            cout << s << "\n";
            continue;
        }

        sort(v.begin(), v.end());
        int j = s.size() - 1;
        while (j >= 0)
        {
            sum = sum - v[j].first;
            v1[v[j].second] = 1;
            if (sum <= p)
                break;

            j--;
        }
        
        for (int k = 0; k < s.size(); k++)
        {
            if (v1[k] != 1)
                cout << s[k];
        }
        cout << "\n";
    }
}
