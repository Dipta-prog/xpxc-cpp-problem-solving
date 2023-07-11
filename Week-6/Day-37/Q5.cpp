/*
https://codeforces.com/contest/1324/problem/C
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int mx = INT_MIN, kol = 1;
        str += " ";
        if (str.find('L') == -1)
            cout << 1 << endl;

        else
        {
            for (int i = 0; i < str.size() - 1; i++)
            {
                if (str[i] == str[i + 1] && str[i] == 'L')
                    kol++;
                else
                {
                    mx = max(mx, kol);
                    kol = 1;
                }
            }
            cout << mx + 1 << endl;
        }
    }
}
