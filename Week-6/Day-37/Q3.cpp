/*
https://codeforces.com/contest/1472/problem/B
*/
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int arr[n], ar[2] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ar[arr[i] - 1]++;
        }
        if (ar[0] % 2 != 0)
            cout << "NO"
                 << "\n";
        else
        {
            ar[0] /= 2;
            (ar[0] == 0 && ar[1] % 2 != 0) ? cout << "NO"
                                                  << "\n"
                                           : cout << "YES"
                                                  << "\n";
        }
    }

    return 0;
}
