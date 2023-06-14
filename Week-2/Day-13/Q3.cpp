/*
https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX = 1e2 + 5;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, __max = 0;
    cin >> n;

    vector<int> value(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> value[i];
        __max = max(__max, value[i]);
    }

    vector<bool> isPrime(__max + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= __max; i++)
        if (isPrime[i])
            for (int j = i * i; j <= __max; j += i)
                isPrime[j] = false;

    int gretest_gcd = 0, solve = 0;
    for (int p = 2; p <= __max; p++)
    {
        if (isPrime[p])
        {
            int total_value = 0;
            for (int j = 1; j <= n; j++)
                if (value[j] % p == 0)
                    total_value++;

            if (total_value > gretest_gcd)
            {
                gretest_gcd = total_value;
                solve = p;
            }
        }
    }

    cout << solve << "\n";

    return 0;
}
