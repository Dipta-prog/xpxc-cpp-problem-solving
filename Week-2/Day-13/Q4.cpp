/*
https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
*/
/*
       || Mahir Hasan ||
*/

#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            cnt++;
    cout << cnt;
}