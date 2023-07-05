/*
https://codeforces.com/contest/1675/problem/C
*/
#include <iostream>
#include <vector>
using namespace std;

void getDivisors(long long n)
{
    long long freq[26] = {0};
    vector<long long> divisors;
    for (long long i = 1; i * i <= n; ++i)
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i * i != n)
                divisors.push_back(n / i);
        }
}
void solve()
{
    string s;
    cin >> s;
    long long one = 0, zero = 0;
    for (long long i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            zero = i;
            break;
        }
        if (s[i] == '1')
            one = i;
        zero = i;
    }
    cout << zero - one + 1 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
