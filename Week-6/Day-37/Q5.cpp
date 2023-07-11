/*
https://codeforces.com/contest/1324/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int mx = INT_MIN, kol = 1;
        s += " ";
        if (s.find('L') == -1)
            cout << 1 << endl;

        else
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == s[i + 1] && s[i] == 'L')
                    kol++;
                else
                {
                    mx = max(mx, kol);
                    kol = 1;
                }
            }
            cout << mx + 1 << endl;
        }
    }
}
