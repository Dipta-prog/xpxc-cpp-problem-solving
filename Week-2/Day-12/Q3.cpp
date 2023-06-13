/*
https://codeforces.com/problemset/problem/26/A
*/
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int countAlmostPrimes(int n)
{
    int count = 0;

    for (int num = 2; num <= n; num++)
    {
        int divisors = 0;
        for (int i = 2; i <= num; i++)
            if (isPrime(i) && num % i == 0)
            {
                divisors++;
                if (divisors > 2)
                    break;
            }

        if (divisors == 2)
            count++;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    int result = countAlmostPrimes(n);
    cout << result << endl;

    return 0;
}
