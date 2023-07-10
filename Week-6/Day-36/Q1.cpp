/*
https://codeforces.com/contest/1335/problem/A
*/
#include <iostream>
using namespace std;

int main()
{

    int t, n;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int num_alice = n / 2 + 1;
        cout << n - num_alice << "\n";
    }

    return 0;
}
