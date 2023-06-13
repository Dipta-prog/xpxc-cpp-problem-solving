/*

*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string ticket;
        cin >> ticket;

        int sum_first_half = 0;
        int sum_second_half = 0;

        for (int i = 0; i < 3; i++)
            sum_first_half += ticket[i] - '0';

        for (int i = 3; i < 6; i++)
            sum_second_half += ticket[i] - '0';

        (sum_first_half == sum_second_half) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
