/*
https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en
*/
#include <iostream>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;

    int count = 0;
    for (int i = 0; i <= k; i++)
        for (int j = 0; j <= k; j++)
        {
            int z = s - (i + j);
            if (z >= 0 && z <= k)
                count++;
        }

    cout << count << '\n';

    return 0;
}
