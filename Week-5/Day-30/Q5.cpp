/*
https://codeforces.com/contest/1690/problem/A
*/
#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (n + 1) / 3 << ' ' << (n + 2) / 3 + 1 << ' ' << n / 3 - 1 << '\n';
    }
}
