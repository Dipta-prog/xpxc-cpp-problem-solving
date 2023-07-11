/*
https://codeforces.com/contest/1475/problem/A
*/
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long i, n, m;
    cin >> n;
    
    for (i = 0; i < n; i++)
    {
        cin >> m;
        (!(m & m - 1)) ? cout << "NO\n" : cout << "YES\n";
    }
}
