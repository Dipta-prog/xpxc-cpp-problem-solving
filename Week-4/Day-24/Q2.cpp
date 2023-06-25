/*
https://codeforces.com/contest/1714/problem/C
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int s;
        cin >> s;

        string str;
        for (int i = 9; i >= 1; i--)
        {
            if (s >= i)
            {
                str = char('0' + i) + str;
                s -= i;
            }
        }
        cout << str << endl;
    }

    return 0;
}
