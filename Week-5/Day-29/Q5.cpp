/*
https://codeforces.com/contest/1714/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

char *used;
int T, N, i, *A;

int main()
{
    cin.tie(0);
    cout.sync_with_stdio(0);

    for (cin >> T; T--; cout << i + 1 << '\n')
    {
        cin >> N;

        A = new int[N];
        for (i = 0; i < N; cin >> A[i++])
            ;

        used = new char[N + 1]{};

        for (i = N - 1; i > -1 && !(used[A[i]]); used[A[i]] = true, i--)
            ;
    }

    return 0;
}
