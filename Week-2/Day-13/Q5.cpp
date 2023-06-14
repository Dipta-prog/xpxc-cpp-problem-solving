/*
https://atcoder.jp/contests/abc156/tasks/abc156_b?lang=en
*/
#include <iostream>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;

    int ans = 0;
    while (N > 0)
    {
        ans++;
        N = N / K;
    }

    cout << ans;
    return 0;
}
