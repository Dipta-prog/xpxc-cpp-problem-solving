/*
https://codeforces.com/problemset/problem/1669/B
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        unordered_map<int, int> count;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count[arr[i]]++;
        }

        int res = -1;
        for (int i = 0; i < n; i++)
        {
            if (count[arr[i]] >= 3)
            {
                res = arr[i];
                break;
            }
        }

        cout << res << endl;
    }

    return 0;
}
