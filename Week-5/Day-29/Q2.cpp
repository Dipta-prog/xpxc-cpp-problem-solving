/*
https://codeforces.com/contest/1729/problem/B
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        char c;
        cin >> n;
        string s;
        cin >> s;
        vector<char> vec;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                int l = s[i - 1] - '0';
                int m = s[i - 2] - '0';
                m = m * 10;
                int s = l + m;
                int c = s + int('a') - 1;
                vec.push_back(char(c));
                i = i - 2;
            }
            else
            {
                int l = s[i] - '0';
                int c = l - 1 + int('a');
                vec.push_back(char(c));
            }
        }
        reverse(vec.begin(), vec.end());
        for (auto i : vec)
            cout << i;

        cout << endl;
    }
    return 0;
}
