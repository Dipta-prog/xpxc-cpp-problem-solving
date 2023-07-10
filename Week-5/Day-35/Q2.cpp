/*
https://codeforces.com/contest/1213/problem/B
*/
#include <iostream>
#include <vector>
using namespace std;
#define bawdy cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
int main()
{
    bawdy int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int min = v[n - 1];
        int answer = 0;
        for (int k = n - 2; k >= 0; --k)
        {
            if (v[k] > min)
                answer++;
            else
                min = v[k];
        }
        cout << answer << "\n";
    }

    return 0;
}
