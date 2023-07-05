/*
https://codeforces.com/contest/1702/problem/A
*/
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int a[t];
    int p, output;
    for (int i = 0; i < t; i++)
        cin >> a[i];

    for (int i = 0; i < t; i++)
    {
        output = 1;
        p = a[i];
        while (p > 1)
        {
            p = p / 10;
            if (p >= 1)
                output = 10 * output;
        }
        cout << a[i] - output << "\n";
    }

    return 0;
}
