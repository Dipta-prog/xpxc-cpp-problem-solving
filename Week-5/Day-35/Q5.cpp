/*
https://codeforces.com/contest/1808/problem/A
*/
#include <iostream>
using namespace std;
int f(int x)
{
    int a = 10, b = -1;
    while (x)
        a = min(a, x % 10), b = max(b, x % 10), x /= 10;
    return b - a;
}

int main()
{
    int t, l, r;
    cin >> t;
    while (t--)
    {
        scanf("%d%d", &l, &r);
        int mx = -1, ii = -1;
        while (l <= r)
        {
            if (mx < f(l))
                mx = f(l), ii = l;
            if (mx == 9)
                break;
            l++;
        }
        printf("%d\n", ii);
    }
    return 0;
}
