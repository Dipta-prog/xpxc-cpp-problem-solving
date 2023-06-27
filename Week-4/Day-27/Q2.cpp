/*
https://codeforces.com/contest/1741/problem/B
*/
#include <iostream>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    if (n == 3 || n == 1)
    {
        cout << -1 << "\n";
        return;
    }

    if (n % 2 == 0)
    {
        for (int j = n; j >= 1; j--)
            cout << j << " ";
        cout << "\n";
        return;
    }

    cout << n << " " << n - 1 << " ";
    for (int i = 1; i <= n - 2; i++)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solution();

    return 0;
}

