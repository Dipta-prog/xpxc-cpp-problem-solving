/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
*/

#include <iostream>
#include <vector>
using namespace std;

void sieve_of_eratosthenes(long long int N)
{
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (long long int p = 2; p * p <= N; p++)
        if (isPrime[p])
            for (long long int i = p * p; i <= N; i += p)
                isPrime[i] = false;

    for (long long int i = 2; i <= N; i++)
        if (isPrime[i])
            cout << i << " ";
}

int main()
{
    long long int N;
    cin >> N;

    sieve_of_eratosthenes(N);

    return 0;
}
