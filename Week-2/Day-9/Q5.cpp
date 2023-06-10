/*

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        map<string, long long int> f;
        string s[3][1005];
        for (long long int i = 0; i < 3; i++)
        {
            for (long long int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                f[s[i][j]]++;
            }
        }
        for (long long int i = 0; i < 3; i++)
        {
            long long int sum = 0;
            for (long long int j = 0; j < n; j++)
            {
                if (f[s[i][j]] == 1)
                    sum += 3;
                else if (f[s[i][j]] == 2)
                    sum += 1;
            }
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}