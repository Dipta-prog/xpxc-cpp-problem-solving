/* https://codeforces.com/contest/1582/problem/A */
#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int a, b, c;
    cin >> a >> b >> c;

    long long int sum = 1 * a + 2 * b + 3 * c;

    long long int ans = abs((sum - sum / 2) - sum / 2);

    cout << ans << endl;
}

int main()
{
    long long int n;
    cin >> n;
    
    while (n--)
        solve();
}
