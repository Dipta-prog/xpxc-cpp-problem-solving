/*
https://www.codechef.com/START99D/problems/MOZZ
*/
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y, R;
        cin >> X >> Y >> R;

        int extra_sticks = R / 30;
        int total_sticks = X + extra_sticks;
        int plates = (total_sticks + Y - 1) / Y;

        cout << plates << endl;
    }

    return 0;
}
