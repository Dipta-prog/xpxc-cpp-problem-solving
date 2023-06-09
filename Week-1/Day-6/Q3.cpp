/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallestSum(const vector<int> &arr)
{
    int n = arr.size();
    int smallestSum = INT_MAX;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j] + j - i;
            smallestSum = min(smallestSum, sum);
        }

    return smallestSum;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];
            
        int smallestSum = findSmallestSum(arr);
        cout << smallestSum << endl;
    }

    return 0;
}
