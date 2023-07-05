/*
https://codeforces.com/contest/1729/problem/C
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        vector<pair<char, int>> v;
        int l = s.length();

        for (int j = 0; j < l; j++)
            v.push_back(make_pair(s[j], j + 1));
        sort(v.begin(), v.end());

        int a, z;
        if (s[0] <= s[l - 1])
        {
            for (a = 0; v[a].first != s[0]; a++)
                ;
            for (z = (l - 1); v[z].first != s[l - 1]; z--)
                ;

            cout << s[l - 1] - s[0] << " " << z - a + 1 << "\n";

            cout << "1 ";
            for (int j = a; j <= z; j++)
            {
                if (v[j].second == 1 || v[j].second == l)
                    continue;
                cout << v[j].second << " ";
            }
            if (l != 1)
                cout << l;
            cout << "\n";
        }
        else
        {
            for (a = (l - 1); v[a].first != s[0]; a--)
                ;
            for (z = 0; v[z].first != s[l - 1]; z++)
                ;

            cout << s[0] - s[l - 1] << " " << a - z + 1 << "\n";

            cout << "1 ";
            for (int j = a; j >= z; j--)
            {
                if (v[j].second == 1 || v[j].second == l)
                    continue;
                cout << v[j].second << " ";
            }
            if (l != 1)
                cout << l;
            cout << "\n";
        }
    }
}
