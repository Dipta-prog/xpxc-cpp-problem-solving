/*
https://codeforces.com/contest/1512/problem/A
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, d;
        cin >> n;
        int A[n];
        for (int a = 0; a < n; a++)
            cin >> A[a];

        if (A[0] != A[1] && A[0] != A[2] && A[1] == A[2])
            cout << 1 << endl;
        else
        {

            d = A[0];
            for (int a = 0; a < n; a++)
            {
                if (d != A[a])
                {
                    cout << a + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
