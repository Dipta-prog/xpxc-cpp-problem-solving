/*
https://codeforces.com/contest/1800/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        for (char &c : s)
            c = tolower(c);

        unordered_set<int> seen;
        vector<int> val(n, -1);
        for (int i = 0; i < n; i++)
        {
            switch (s[i])
            {
            case 'm':
                val[i] = 0;
                break;
            case 'e':
                val[i] = 1;
                break;
            case 'o':
                val[i] = 2;
                break;
            case 'w':
                val[i] = 3;
                break;
            }
            seen.insert(val[i]);
        }

        vector<int> sorted = val;
        sort(sorted.begin(), sorted.end());
        cout << (sorted == val && (int)seen.size() == 4 && !seen.count(-1) ? "YES" : "NO") << '\n';
    }

    return 0;
}
