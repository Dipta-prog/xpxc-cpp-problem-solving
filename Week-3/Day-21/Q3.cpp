/*
https://codeforces.com/contest/1744/problem/C
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, res = 0;
        string x, str;

        cin >> n;
        cin >> x >> str;
        str += str;
        bool flag = false;

        if (x[0] == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'g')
            {
                res = max(res, cnt);
                flag = false;
            }

            if (str[i] == x[0] && flag == false)
            {
                flag = true;
                cnt = 0;
            }

            if (flag)
                cnt++;
        }
        cout << res << "\n";
    }
    return 0;
}
