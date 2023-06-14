/*
https://codeforces.com/problemset/problem/433/B
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    vector<long long> arr2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    sort(arr2.begin(), arr2.end());

    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
        arr2[i] += arr2[i - 1];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int t, r, l;
        cin >> t >> l >> r;
        l -= 1;
        r -= 1;

        if (t == 1)
            (l == 0) ? cout << arr[r] << endl : cout << arr[r] - arr[l - 1] << endl;
        else
            (l == 0) ? cout << arr2[r] << endl : cout << arr2[r] - arr2[l - 1] << endl;
    }

    return 0;
}