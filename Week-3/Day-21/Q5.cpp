/*
https://codeforces.com/contest/1741/problem/A
*/
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    int left_x = 0, right_x = 0;

    for (char c : a)
        if (c == 'X')
            left_x++;

    for (char c : b)
        if (c == 'X')
            right_x++;

    char last_a = a.back();
    char last_b = b.back();

    if (last_a == 'L' && last_b == 'L')
    {
        if (left_x > right_x)
            cout << ">\n";
        else if (left_x < right_x)
            cout << "<\n";
        else
            cout << "=\n";
    }
    else if (last_a == 'S' && last_b == 'S')
    {
        if (left_x > right_x)
            cout << "<\n";
        else if (left_x < right_x)
            cout << ">\n";
        else
            cout << "=\n";
    }
    else if (last_a == 'L' && (last_b == 'M' || last_b == 'S'))
        cout << ">\n";
    else if (last_a == 'S' && (last_b == 'M' || last_b == 'L'))
        cout << "<\n";
    else if (last_a == 'M' && last_b == 'S')
        cout << ">\n";
    else if (last_a == 'M' && last_b == 'L')
        cout << "<\n";
    else
        cout << "=\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
