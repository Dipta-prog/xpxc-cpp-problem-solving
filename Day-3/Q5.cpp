/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
*/
#include <iostream>
#include <string>
using namespace std;

bool isLuckyNumber(int number)
{
    string numberString = to_string(number);
    for (char digit : numberString)
        if (digit != '4' && digit != '7')
            return false;
    return true;
}

int main()
{
    int A, B;
    cin >> A >> B;

    bool foundLuckyNumber = false;
    for (int number = A; number <= B; number++)
    {
        if (isLuckyNumber(number))
        {
            cout << number << " ";
            foundLuckyNumber = true;
        }
    }

    if (!foundLuckyNumber)
        cout << -1;

    return 0;
}
