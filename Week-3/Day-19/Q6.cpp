/*
https://codeforces.com/contest/1759/problem/A
*/
#include <iostream>
#include <string>
using namespace std;

string pat;

void solve()
{
    string s;
    cin >> s;
    cout<< (pat.find(s) != string::npos ? "Yes" : "No") << '\n';
}

int main()
{
    for (int i = 0; i < 50; i++)
        pat += "Yes";

    int t;
    cin >> t;

    while (t--)
        solve();
        
    return 0;
}
