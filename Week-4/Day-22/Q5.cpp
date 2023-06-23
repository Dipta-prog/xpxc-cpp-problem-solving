/*
https://www.codechef.com/problems/MOONSOON
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, m, h;
        cin >> n >> m >> h;

        long long A[n], B[m];

        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < m; i++)
            cin >> B[i];

        sort(A, A + n, greater<long long>());
        sort(B, B + m, greater<long long>());

        long long ans = 0;
        int size = min(m, n);
        for (int i = 0; i < size; i++)
            ans += min(A[i], B[i] * h);

        cout << ans << endl;
    }

    return 0;
}
