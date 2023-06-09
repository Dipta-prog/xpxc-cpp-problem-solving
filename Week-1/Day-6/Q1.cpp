/*
https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findMinimumsInGroups(const vector<int> &input, int k)
{
    int n = input.size();
    int i = 0;

    while (i < n)
    {
        int minVal = input[i];

        for (int j = i + 1; j < i + k && j < n; j++)
            if (input[j] < minVal)
                minVal = input[j];

        cout << minVal << " ";
        i += k;
    }

    cout << endl;
}

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> numbers(N);
    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    findMinimumsInGroups(numbers, K);

    return 0;
}

/*
8 3
4 -1 2 ----->-1
3 5 0 ------> 0
2 7 --------> 2
*/

//
#include <iostream>
#include <algorithm>
using namespace std;

void findMinimumsInGroups(int N, int K)
{
    int minVal;
    int input;

    for (int i = 0; i < N; i++)
    {
        cin >> input;

        (i % K == 0) ? minVal = input : minVal = min(minVal, input);

        if ((i + 1) % K == 0 || i == N - 1)
            cout << minVal << " ";
    }

    cout << endl;
}

int main()
{
    int N, K;
    cin >> N >> K;

    findMinimumsInGroups(N, K);

    return 0;
}
