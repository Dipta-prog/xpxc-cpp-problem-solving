/*
https://codeforces.com/contest/1840/problem/A
*/
#include <iostream>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    string s;

    cin >> s;
    
    char a = s[0];
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == a)
        {
            putchar(a);
            a = s[++i];
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}