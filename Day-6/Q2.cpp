/*
https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
*/
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int L, R;
        cin >> L >> R;
        (R > L) ? cout << (long long)(R - L + 1) * (L + R) / 2 << endl : cout << (long long)(L - R + 1) * (L + R) / 2 << endl;
    }

    return 0;
}
