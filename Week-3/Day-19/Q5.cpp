/*
https://codeforces.com/contest/1772/problem/A
*/
#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int a = s[0] - '0';
    int b = s[2] - '0';
    cout << a + b << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
