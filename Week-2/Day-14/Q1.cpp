/*
https://codeforces.com/contest/1722/problem/A
*/
#/* include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt = 0;
    string s;
    string st = "Timru";
    cin >> n;

    while (n--)
    {
        cin >> m;
        cin >> s;
        sort(s.begin(), s.end());

        if (m != 5)
        {
            cout << "NO" << '\n';
            continue;
        }
        for (int i = 0; i < st.size(); i++)
            if (s[i] != st[i])
                cnt++;

        (cnt == 0) ? cout << "YES" << '\n' : cout << "NO" << '\n';

        cnt = 0;
    }
}
 */

//
#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s)
{
    vector<int> freq(26, 0);

    for (char c : s)
        freq[c - 'a']++;

    string target = "Timru";
    for (char c : target)
        freq[c - 'a']--;

    for (int f : freq)
        if (f != 0)
            return false;

    return true;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int m;
        string s;
        cin >> m >> s;

        if (m != 5)
        {
            cout << "NO\n";
            continue;
        }

        isAnagram(s) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
