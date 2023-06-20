/*
https://codeforces.com/contest/1759/problem/C
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while (t--)
    {
        int l, r, x, a, b;
        cin >> l >> r >> x;
        cin >> a >> b;

        if (a == b)
            cout << 0 << endl;
        else if (abs(a - b) >= x)
            cout << 1 << endl;
        else if ((abs(a - r) >= x && abs(r - b) >= x) || (abs(a - l) >= x && abs(b - l) >= x))
            cout << 2 << endl;
        else if ((abs(a - l) >= x && abs(l - r) >= x && abs(r - b) >= x) || (abs(a - r) >= x && abs(r - l) >= x && abs(l - b) >= x))
            cout << 3 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
