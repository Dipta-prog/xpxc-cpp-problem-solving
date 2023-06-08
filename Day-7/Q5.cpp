/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
*/
#include <iostream>
#include <string>
using namespace std;

void replaceSubstring(string &s, const string &target, const string &replacement)
{
    size_t pos = s.find(target);
    while (pos != string::npos)
    {
        s.replace(pos, target.length(), replacement);
        pos = s.find(target, pos + replacement.length());
    }
}

int main()
{
    string S;
    cin >> S;
    replaceSubstring(S, "EGYPT", " ");

    cout << S << endl;

    return 0;
}