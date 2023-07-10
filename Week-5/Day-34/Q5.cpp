/*
https://codeforces.com/contest/1426/problem/C
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int x = sqrt(n);
        int ans = x - 1;
        long long sum = x;
        
        while (sum < n)
        {
            sum += x;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
