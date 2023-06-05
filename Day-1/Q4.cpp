#include <vector>
#include <deque>
using namespace std;

class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> &arr, int n, int k)
    {
        vector<int> result;
        deque<int> dq;

        for (int i = 0; i < n; i++)
        {
            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            while (!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1)
                result.push_back(arr[dq.front()]);
        }

        return result;
    }
};
