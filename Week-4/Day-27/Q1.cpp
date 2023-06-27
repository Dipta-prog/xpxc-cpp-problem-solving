/*
https://codeforces.com/contest/1741/problem/A
*/
#include <iostream>
#include <string>
using namespace std;

int calculate(string a)
{
    if (a == "M")
        return 0;
    else if (a.back() == 'S')
        return -int(a.length());
    else
        return a.length();
}

void solve()
{
    string a, b;
    cin >> a >> b;

    if (calculate(a) < calculate(b))
        cout << "<\n";
    else if (calculate(a) == calculate(b))
        cout << "=\n";
    else
        cout << ">\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
