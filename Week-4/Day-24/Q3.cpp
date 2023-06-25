/*
https://codeforces.com/contest/1702/problem/A
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long m;
        cin >> m;

        long long count = 1;
        while (count * 10 <= m)
            count *= 10;

        cout << m - count << '\n';
    }

    return 0;
}
