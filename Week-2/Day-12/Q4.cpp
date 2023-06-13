/*
https://codeforces.com/problemset/problem/271/A
*/
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool hasDistinctDigits(int year)
{
    string yearString = to_string(year);
    unordered_set<char> digits;

    for (char digit : yearString)
    {
        if (digits.count(digit) > 0)
            return false;
        digits.insert(digit);
    }

    return true;
}

int findNextDistinctYear(int year)
{
    while (true)
    {
        year++;
        if (hasDistinctDigits(year))
            return year;
    }
}

int main()
{
    int y;
    cin >> y;

    int nextDistinctYear = findNextDistinctYear(y);
    cout << nextDistinctYear << endl;

    return 0;
}
