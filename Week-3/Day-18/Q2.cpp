/*
https://codeforces.com/contest/1790/problem/B
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n, int s, int r, int max)
{
    vector<int> v;

    for (; r >= max; r -= max)
        v.push_back(max);

    if (r)
        v.push_back(r);

    for (int i = 0; i < v.size() && v.size() + 1 < n;)
    {
        if (v[i] == 1)
        {
            ++i;
            continue;
        }
        --v[i];
        v.push_back(1);
    }

    v.push_back(max);
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int max = s - r;
        solve(n, s, r, max);
    }

    return 0;
}
