#include <iostream>
#include <string>
using namespace std;

const int MOD = 1000000007;

int countWaysToSliceString(int N, int K, string S)
{
    int vowelCount = 0;
    int ways = 1;

    for (char ch : S)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelCount++;
            if (vowelCount == K)
            {
                vowelCount = 0;
                ways = (ways * 2) % MOD;
            }
        }
    }

    return ways;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        string S;
        cin >> S;

        int result = countWaysToSliceString(N, K, S);
        cout << result << endl;
    }

    return 0;
}
