/*
https://codeforces.com/contest/1692/problem/B
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int count = 0;

        for (int i = 0; i < n; i++)
            if (freq[arr[i]])
            {
                count++;
                freq[arr[i]] = 0;
            }

        ((n - count) % 2) ? cout << count - 1 << endl : cout << count << endl;
    }

    return 0;
}
