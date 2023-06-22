/*
https://codeforces.com/contest/1744/problem/A
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void result()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<char> b(60, 0);
    b.reserve(n);

    int flag = 1;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (b[a[i]] != 0 && b[a[i]] != s[i])
        {
            flag = 0;
            break;
        }
        b[a[i]] = s[i];
    }
    cout << (flag ? "YES" : "NO") << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int t;
    cin >> t;

    while (t--)
        result();

    return 0;
}
