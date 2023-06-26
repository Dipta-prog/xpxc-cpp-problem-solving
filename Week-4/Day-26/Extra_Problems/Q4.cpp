/*
https://codeforces.com/problemset/problem/4/A
*/
#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;
    (w % 2 == 0 && w > 2)?cout << "YES" << endl:cout << "NO" << endl;

    return 0;
}
