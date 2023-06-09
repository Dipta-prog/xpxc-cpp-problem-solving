/*
https://www.codechef.com/problems/PALIXOR
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> allpali;
void precompute()
{
    for (int i = 0; i < 32786; i++)
    {
        string s = to_string(i);
        string temp = s;
        reverse(s.begin(), s.end());
        if (temp == s)
            allpali.push_back(i);
    }
}

void solve()
{
    long long int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    unordered_map<int, int> x;
    long long int ans = 0;
    for (auto ele : v)
    {
        ++x[ele];
        for (auto pali : allpali)
            ans += x[ele ^ pali];
    }
    cout << ans << endl;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    int t;
    cin >> t;

    while (t-- > 0)
        solve();

    return 0;
}
