/*
https://codeforces.com/contest/1702/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int result = 0;
        set<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
            if (st.size() > 3)
            {
                result++;
                st.clear();
                st.insert(s[i]);
            }
        }
        if (st.size() != 0)
            result++;
        cout << result << "\n";
    }

    return 0;
}
