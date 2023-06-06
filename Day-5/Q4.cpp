/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int X)
{
    if (X < 2)
        return false;

    int sqrtX = sqrt(X);
    for (int i = 2; i <= sqrtX; i++)
        if (X % i == 0)
            return false;

    return true;
}

int main()
{
    int X;
    cin >> X;

    isPrime(X) ? cout << "YES" << endl : cout << "NO" << endl;
    
    return 0;
}
