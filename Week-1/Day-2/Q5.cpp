/*
https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
*/
#include <iostream>
using namespace std;

int get_size(string n)
{
    return size(n);
}

int main()
{
    string n;
    cin >> n;

    if (get_size(n) == 1)
        cout << "000" << n << endl;
    else if (get_size(n) == 2)
        cout << "00" << n << endl;
    else if (get_size(n) == 3)
        cout << "0" << n << endl;
    else
        cout << n << endl;
}
