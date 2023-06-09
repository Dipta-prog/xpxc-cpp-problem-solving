/*
https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
*/

#include <iostream>
using namespace std;

int main()
{
    int btn_1, btn_2;
    cin >> btn_1 >> btn_2;

    if (btn_1 > btn_2)
        cout << btn_1 + btn_1 - 1;
    else if (btn_1 < btn_2)
        cout << btn_2 + btn_2 - 1;
    else
        cout << btn_1 + btn_2;
}