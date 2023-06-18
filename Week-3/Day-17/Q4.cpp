/*
https://atcoder.jp/contests/abc121/tasks/abc121_d?lang=en
*/
#include <iostream>
#include <vector>
using namespace std;

long long int xr(long long int x)
{
    switch (x % 4)
    {
    case 0:
        return x;
    case 1:
        return 1;
    case 2:
        return x + 1;
    default:
        return 0;
    }
}

int main()
{
    long long int a, b;
    cin >> a >> b;
    
    (a == 0) ? cout << xr(b) << "\n" : cout << (xr(b) ^ xr(a - 1)) << "\n";

    return 0;
}