/*

*/
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        unordered_map<int, int> count;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
            if (count[a[i]] >= 3)
            {
                cout << a[i] << "\n";
                break;
            }
        }

        if (count[a[n - 1]] < 3)
            cout << -1 << "\n";
    }

    return 0;
}
