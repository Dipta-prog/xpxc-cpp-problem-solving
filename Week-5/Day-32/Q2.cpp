/*
https://codeforces.com/contest/1674/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

bool ispr(long long int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int gcd(long long int a, long long int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

void Seive(int a)
{
    bool is_prime[a + 1];
    memset(is_prime, true, sizeof(is_prime));
    for (long long int i = 2; i * i <= a; i++)
    {
        if (is_prime[i] == true)
        {
            for (int j = (2 * i); j <= a; j += i)
                is_prime[j] = false;
        }
    }
    for (long long int i = 2; i <= a; i++)
    {
        if (is_prime[i])
            cout << i << ' ';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        long long int b = a[0] - 97;
        long long int c = a[1] - 97;

        (a[0] < a[1]) ? cout << (25 * b) + c << "\n" : cout << (25 * b) + c + 1 << "\n";
    }
    return 0;
}
