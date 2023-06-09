/*
https://www.codechef.com/problems/PR0BLEM
*/
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        ((N - M) % 2 == 0) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}