/*
https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";
    for (int i = 0; i < s.length(); i += 2)
        result += s[i];

    cout << result << endl;

    return 0;
}
