/*
https://codeforces.com/contest/1840/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << min(a, (int)pow(2, b) - 1) + 1 << endl;
    }
}
