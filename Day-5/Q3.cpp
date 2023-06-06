/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
*/
#include <iostream>
#include <vector>
using namespace std;

vector<long long int> factorials(21, -1);

long long int factorial(long long int n)
{
    if (factorials[n] != -1)
        return factorials[n];

    long long int result = 1;
    for (long long int i = 2; i <= n; i++)
        result *= i;

    factorials[n] = result;
    return result;
}

int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int N;
        cin >> N;
        cout << factorial(N) << endl;
    }

    return 0;
}
