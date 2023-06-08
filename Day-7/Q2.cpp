/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
*/
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main()
{
    string s;
    cin >> s;

    isPalindrome(s) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
