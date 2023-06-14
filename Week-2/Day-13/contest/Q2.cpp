#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int minVotes = (m + 2) / 2;

        cout << minVotes << '\n';
    }

    return 0;
}
