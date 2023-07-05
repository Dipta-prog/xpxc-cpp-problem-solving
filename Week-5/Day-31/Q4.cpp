/*
https://codeforces.com/contest/1675/problem/B
*/
///**Bismillahir Rahmanir Raheem**
///$$      Shaharear_Emon       $$
///&&&&&    Never_Give_Up     &&&&&
///%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#include <iostream>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {

        int n, i;
        cin >> n;

        int arr[n + 10];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count = 0, f = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            while (arr[i] >= arr[i + 1])
            {
                if (arr[i] == 0)
                {
                    f = 1;
                    break;
                }
                else
                {
                    arr[i] /= 2;
                    count++;
                }
            }
        }

        (f == 1) ? cout << -1 << "\n" : cout << count << "\n";
    }

    return 0;
}
