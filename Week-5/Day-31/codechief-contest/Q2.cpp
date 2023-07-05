/*

*/
#include <iostream>
#include <algorithm>
using namespace std;

string getWinner(int A1, int A2, int A3, int B1, int B2, int B3)
{
    int aliceScore = A1 + A2 + A3 - min({A1, A2, A3});
    int bobScore = B1 + B2 + B3 - min({B1, B2, B3});

    if (aliceScore > bobScore)
        return "Alice";
    else if (bobScore > aliceScore)
        return "Bob";
    else
        return "Tie";
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A1, A2, A3, B1, B2, B3;
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;

        string winner = getWinner(A1, A2, A3, B1, B2, B3);
        cout << winner << endl;
    }

    return 0;
}
