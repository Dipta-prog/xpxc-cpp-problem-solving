/*
https://www.codechef.com/problems/PALIXOR
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> all_pali;

void precompute()
{
    for (int i = 0; i < 32786; i++)
    {
        string s = to_string(i);
        string temp = s;
        reverse(s.begin(), s.end());
        if (temp == s)
            all_pali.push_back(i);
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
        for (auto pali : all_pali)
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

    while (t--)
        solve();

    return 0;
}
