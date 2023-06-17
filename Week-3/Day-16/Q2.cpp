/*
https://codeforces.com/contest/1703/problem/A
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

        transform(s.begin(), s.end(), s.begin(), ::toupper);
        (s == "YES") ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
