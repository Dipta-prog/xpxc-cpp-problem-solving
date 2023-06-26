/*
https://codeforces.com/contest/1729/problem/B
*/
#include <iostream>
#include <algorithm>
using namespace std;
const long long int INF = 1e18;

signed main()
{
    long long int t;
    cin >> t;

    while (t--)
    {

        long long int n;
        cin >> n;

        string str;
        cin >> str;

        string result;

        for (long long int i = n - 1; i >= 0; i--)
        {
            if (str[i] == '0')
            {
                result.push_back(char(96 + (str[i - 2] - '0') * 10 + (str[i - 1] - '0')));
                i -= 2;
            }
            else
                result.push_back(char(96 + (str[i] - '0')));
        }

        reverse(begin(result), end(result));

        cout << result << '\n';
    }
}
