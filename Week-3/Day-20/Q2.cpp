/*
https://codeforces.com/contest/1800/problem/B
*/
#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

void sol()
{
    unordered_map<char, int> mp;
    int n, k, sum = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        char x;
        cin >> x;
        mp[x]++;
    }
    
    for (char i = 'A'; i <= 'Z'; ++i)
    {
        if (mp[i] >= mp[i + 32])
        {
            sum += mp[i + 32];
            mp[i] -= mp[i + 32];
            mp[i + 32] = 0;
        }
        else
        {
            sum += mp[i];
            mp[i + 32] -= mp[i];
            mp[i] = 0;
        }
    }
    for (auto [a, b] : mp)
    {
        if (b)
        {
            if (2 * k >= b)
            {
                sum += b / 2;
                k -= b / 2;
            }
            else
            {
                sum += k;
                break;
            }
        }
    }
    cout << sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
        cout << endl;
    }
}
