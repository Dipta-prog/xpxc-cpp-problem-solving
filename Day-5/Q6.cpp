/*
https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

long long int maximumSummation(vector<long long int> &arr, long long int k)
{
    sort(arr.begin(), arr.end(), greater<long long int>());

    long long int sum = 0;
    for (long long int i = 0; i < k; i++)
        if (arr[i] >= 0)
            sum += arr[i];

    return sum;
}

int main()
{
    long long int n, k;
    cin >> n >> k;

    vector<long long int> arr(n);
    for (long long int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maximumSummation(arr, k) << endl;

    return 0;
}
