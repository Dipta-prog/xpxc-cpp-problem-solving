/*
https://www.spoj.com/problems/CSUMQ/en/
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int i, j;
        cin >> i >> j;

        int sum = 0;
        for (int k = i; k <= j; k++)
        {
            sum += nums[k];
        }

        cout << sum << endl;
    }

    return 0;
}
