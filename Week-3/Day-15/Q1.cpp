/*
https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
*/
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int> &a, long long k)
{
    unordered_map<long long, int> freqSum;
    int maxLength = 0;
    long long currSum = 0;
    int left = 0;

    for (int right = 0; right < a.size(); right++)
    {
        currSum += a[right];

        while (currSum > k)
        {
            currSum -= a[left];
            left++;
        }

        if (currSum == k)
            maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int length = longestSubarrayWithSumK(a, k);
    cout << length << endl;

    return 0;
}
