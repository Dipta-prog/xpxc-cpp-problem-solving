/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        (num % 2 == 0) ? evenCount++ : oddCount++;
        (num > 0) ? positiveCount++ : (num < 0) && negativeCount++;
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}
