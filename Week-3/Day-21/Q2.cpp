/*
https://codeforces.com/contest/1744/problem/B
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q, sum = 0;
        cin >> n >> q;
        int odd = 0, even = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            (x % 2 == 0) ? odd++ : even++;
            sum += x;
        }
        long long int k, p;
        while (q--)
        {
            cin >> k >> p;
            if (k == 0)
            {
                sum += p * odd;
                if (p % 2 == 1)
                {
                    even += odd;
                    odd = 0;
                }
            }
            else
            {
                sum += p * even;
                if (p % 2 == 1)
                {
                    odd += even;
                    even = 0;
                }
            }
            cout << sum << '\n';
        }
    }
}
