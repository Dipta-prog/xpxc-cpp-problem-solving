/*
https://codeforces.com/problemset/problem/1669/E
*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<string, int> memo;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            for (int j = 0; j < 2; j++)
            {
                for (char c = 'a'; c <= 'k'; c++)
                {
                    if (s[j] == c)
                        continue;

                    string ns = s;
                    ns[j] = c;
                    ans += memo[ns];
                }
            }

            memo[s]++;
        }

        cout << ans << "\n";
    }

    return 0;
}

