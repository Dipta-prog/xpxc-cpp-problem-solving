/*
https://codeforces.com/contest/1669/problem/G
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        vector<vector<char>> v(n, vector<char>(m));
        for (long long int i = 0; i < n; i++)
        {
            for (long long int j = 0; j < m; j++)
                cin >> v[i][j];
        }
        for (long long int i = n - 2; i >= 0; i--)
        {
            for (long long int k = i; k < n - 1; k++)
            {
                for (long long int j = 0; j < m; j++)
                {
                    if (v[k][j] == '*' && v[k + 1][j] == '.')
                        swap(v[k][j], v[k + 1][j]);
                }
            }
        }
        for (long long int i = 0; i < n; i++)
        {
            for (long long int j = 0; j < m; j++)
                cout << v[i][j];
            cout << endl;
        }
    }

    return 0;
}
