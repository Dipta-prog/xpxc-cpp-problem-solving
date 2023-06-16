/*

*/
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        unordered_map<int, int> prefixSum;
        int maxLength = 0;
        int currSum = 0;

        for (int i = 0; i < N; i++)
        {
            currSum += A[i];

            if (currSum == K)
                maxLength = i + 1;

            if (prefixSum.find(currSum - K) != prefixSum.end())
                maxLength = max(maxLength, i - prefixSum[currSum - K]);

            if (prefixSum.find(currSum) == prefixSum.end())
                prefixSum[currSum] = i;
        }

        return maxLength;
    }
};

int main()
{
    Solution obj;
    int N, K;
    cin >> N >> K;

    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int length = obj.lenOfLongSubarr(A, N, K);
    cout << length << endl;

    return 0;
}
