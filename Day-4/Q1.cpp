/*
https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
*/
#include <iostream>
using namespace std;

int main()
{
    int A, B, T;
    cin >> A >> B >> T;

    int count = 0;
    int time = A;

    while (time <= T + 0.5)
    {
        count += B;
        time += A;
    }

    cout << count << endl;

    return 0;
}
