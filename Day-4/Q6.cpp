/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
*/
#include <bits/stdc++.h>
using namespace std;

void printDivisors(int N)
{
    vector<int> divisors;
    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            divisors.push_back(i);
            if (i != N / i)
                divisors.push_back(N / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int divisor : divisors)
        cout << divisor << endl;
}

int main()
{
    int N;
    cin >> N;

    printDivisors(N);

    return 0;
}
