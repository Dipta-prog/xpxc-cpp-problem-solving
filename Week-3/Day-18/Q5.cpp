/*
https://codeforces.com/contest/1772/problem/C
*/
#include <iostream>
#include <vector>
using namespace std;

void run(int n, int k)
{
    int nxt_mth = 1;
    int aux = 1;
    int num = 0;

    vector<int> res;

    while (num != k)
    {
        res.push_back(nxt_mth);
        num++;
        if (n - (nxt_mth + aux) + 1 >= k - num)
        {
            nxt_mth += aux;
            aux++;
        }
        else
            nxt_mth++;
    }

    for (int x : res)
        cout << x << " ";

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, n;
        cin >> k >> n;

        run(n, k);
    }
}
