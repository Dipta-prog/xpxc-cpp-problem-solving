/*

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        vector<long> v(n);
        for (long p = 0; p < n; p++)
            cin >> v[p];

        sort(v.begin(), v.end());

        long res = -1;
        for (long p = 2; p < n; p++)
        {
            if (v[p - 2] == v[p] && v[p - 1] == v[p])
            {
                res = v[p];
                break;
            }
        }

        cout << res << endl;
    }

    return 0;
}