/*
https://codeforces.com/contest/1611/problem/A
*/
#include <iostream>
#include <algorithm>
using namespace std;

void Solve()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
        return void(cout << 0);

    string ax;
    while (n)
    {
        ax.push_back(n % 10);
        n /= 10;
    }

    reverse(ax.begin(), ax.end());
    if (((int)ax.front() - 48) % 2 == 0)
        return void(cout << 1);

    for (auto &i : ax)
    {
        if (((int)i - 48) % 2 == 0)
            return void(cout << 2);
    }
    cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test = 1;
    cin >> test;

    while (test--)
        Solve(), cout << (test ? "\n" : "");

    return 0;
}
