/*
https://www.codechef.com/START95D/problems/DOREWARD
*/
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X;
        cin >> X;

        if (X <= 3)
            cout << "BRONZE" << endl;
        else if (X <= 6)
            cout << "SILVER" << endl;
        else
            cout << "GOLD" << endl;
    }

    return 0;
}
