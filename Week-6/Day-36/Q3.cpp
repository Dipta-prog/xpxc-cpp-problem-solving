/*
https://codeforces.com/contest/1352/problem/B
*/
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % k == n)
            cout << "No"
                 << "\n";
        else if (n % k == 0)
        {
            cout << "Yes"
                 << "\n";
            for (int i = 0; i < k; i++)
                cout << n / k << " ";
            cout << "\n";
        }
        else if (n % 2 == 1 && k % 2 == 0)
            cout << "No"
                 << "\n";
        else
        {
            if ((n % 2 == 1 && k % 2 == 1) || (n % 2 == 0 && k % 2 == 0))
            {
                cout << "Yes"
                     << "\n";
                for (int i = 1; i < k; i++)
                    cout << 1 << " ";
                cout << n - (k - 1) << "\n";
            }
            else
            {
                if (((k - 1) * 2) < n)
                {
                    cout << "Yes"
                         << "\n";
                    for (int i = 1; i < k; i++)
                        cout << 2 << " ";
                    cout << n - (k - 1) * 2 << "\n";
                }
                else
                    cout << "No"
                         << "\n";
            }
        }
    }
}
