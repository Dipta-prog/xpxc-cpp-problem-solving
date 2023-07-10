/*
https://codeforces.com/contest/1213/problem/A
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int change_to = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        change_to += x & 1;
    }

    cout << min(change_to, n - change_to) << "\n";

    return 0;
}
