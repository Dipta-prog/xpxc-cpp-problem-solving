/*
https://codeforces.com/contest/1846/problem/A
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int height, length;
            cin >> height >> length;

            if (length < height)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
