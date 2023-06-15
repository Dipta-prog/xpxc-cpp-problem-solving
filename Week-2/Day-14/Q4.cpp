/*
https://atcoder.jp/contests/abc162/tasks/abc162_c?lang=en
*/
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int N;
    cin >> N;
    long long ans = 0;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
        {
            int gcd_ij = gcd(i, j);
            for (int k = 1; k <= N; k++)
                ans += gcd(gcd_ij, k);
        }
    cout << ans << endl;

    return 0;
}
