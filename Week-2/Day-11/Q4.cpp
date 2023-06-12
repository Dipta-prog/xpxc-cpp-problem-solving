/*
https://codeforces.com/contest/1703/problem/B
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        int arr[26 + 1] = {0};
        cin >> s;
        
        for (int i = 0; i < n; i++)
            arr[s[i] - 'A']++;
 
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
                continue;
            (arr[i] == 1) ? cnt += 2 : cnt = cnt + arr[i] + 1;
        }
        cout << cnt << endl;
    }
 
    return 0;
}