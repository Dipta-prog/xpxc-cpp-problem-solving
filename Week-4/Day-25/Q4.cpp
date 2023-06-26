/*
https://codeforces.com/contest/1759/problem/C
*/
#include <iostream>
using namespace std;

void cond(int a, int b, int r, int l, int x, int &ans)
{
    if (a < b)
    {
        if ((r - b) >= x || (a - l) >= x)
            ans = 2;
        else if ((r - a) >= x && (b - l >= x))
            ans = 3;
        else
            ans = -1;
    }
    else
    {
        if ((b - l) >= x || (r - a) >= x)
            ans = 2;
        else if ((a - l) >= x && (r - b) >= x)
            ans = 3;
        else
            ans = -1;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        int ans = 3;
        if (abs(b - a) >= x)
        {
            cout << 1 << "\n";
            continue;
        }
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        cond(a, b, r, l, x, ans);
        cout << ans << "\n";
    }

    return 0;
}
