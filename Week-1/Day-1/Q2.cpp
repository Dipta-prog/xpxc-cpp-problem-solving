/*
https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
*/
#include <vector>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    vector<long long> result;
    vector<long long> negatives;

    for (int i = 0; i < K; i++)
        if (A[i] < 0)
            negatives.push_back(A[i]);

    if (!negatives.empty())
        result.push_back(negatives[0]);
    else
        result.push_back(0);

    for (int i = K; i < N; i++)
    {
        if (A[i - K] < 0)
            negatives.erase(negatives.begin());

        if (A[i] < 0)
            negatives.push_back(A[i]);

        if (!negatives.empty())
            result.push_back(negatives[0]);
        else
            result.push_back(0);
    }

    return result;
}
