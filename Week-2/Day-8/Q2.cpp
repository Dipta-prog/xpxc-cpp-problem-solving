/*
https://www.codechef.com/problems/SEVENRINGS
*/
#include <iostream>
#include <string>
using namespace std;

bool isValidPhoneNumber(int number)
{
    string phoneNumber = to_string(number);
    if (phoneNumber.length() != 5)
        return false;

    if (phoneNumber[0] == '0')
        return false;

    return true;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X;
        cin >> N >> X;

        int totalBill = N * X;

        isValidPhoneNumber(totalBill) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}