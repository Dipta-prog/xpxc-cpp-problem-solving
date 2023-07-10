/*
https://codeforces.com/contest/1283/problem/B
*/

#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int lim = k / 2;
        int ans = n - n % k;
        ans += min(k / 2, n % k);
        cout << ans << "\n";
    }
    return 0;
}
