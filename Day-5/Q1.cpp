/*
https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        long sum = 0;
        long maxSum = 0;

        for (int i = 0; i < K; i++)
            sum += Arr[i];

        maxSum = sum;

        for (int i = K; i < N; i++)
        {
            sum += Arr[i] - Arr[i - K];
            if (sum > maxSum)
                maxSum = sum;
        }

        return maxSum;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
