/*
https://codeforces.com/contest/1674/problem/C
*/
#include <iostream>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    if (t.compare("a") == 0)
        cout << 1 << endl;
    else if (t.find('a') != string::npos)
        cout << -1 << endl;
    else
        cout << ((long long)1 << s.size()) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t = 1;
    cin >> t;
    for (long long i = 0; i < t; i++)
        solve();

    return 0;
}
