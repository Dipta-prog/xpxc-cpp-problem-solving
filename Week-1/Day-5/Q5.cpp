/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int N)
{
    string numString = to_string(N);
    int left = 0;
    int right = numString.length() - 1;

    while (left < right)
    {
        if (numString[left] != numString[right])
            return false;

        left++;
        right--;
    }

    return true;
}

void print_reversed(int N)
{
    string reversedNumString = to_string(N);
    reverse(reversedNumString.begin(), reversedNumString.end());
    int reversedNum = stoi(reversedNumString);

    cout << reversedNum << endl;
    return;
}

int main()
{
    int N;
    cin >> N;
    print_reversed(N);
    isPalindrome(N) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
