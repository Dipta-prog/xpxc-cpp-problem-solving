/*
https://codeforces.com/contest/1692/problem/D
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;

        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));

        int count = 0;
        if ((m % 10) * 10 + m / 10 == h)
            count++;

        while (true)
        {
            m += x;
            h += m / 60;
            m %= 60;
            h %= 24;

            if (h == stoi(s.substr(0, 2)) && m == stoi(s.substr(3, 2)))
                break;

            if ((m % 10) * 10 + m / 10 == h)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}
