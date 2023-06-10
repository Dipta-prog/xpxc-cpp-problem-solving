/*
https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
*/
#include <iostream>
using namespace std;

int countTriples(int S, int T)
{
    int count = 0;

    for (int a = 0; a <= S; a++)
        for (int b = 0; b <= S - a; b++)
            for (int c = 0; c <= S - a - b; c++)
                if (a * b * c <= T)
                    count++;

    return count;
}

int main()
{
    int S, T;
    cin >> S >> T;

    int result = countTriples(S, T);
    cout << result << endl;

    return 0;
}
