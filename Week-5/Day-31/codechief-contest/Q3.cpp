/*

*/

#include <iostream>
#include <string>
using namespace std;

string rotateCipher(const string &S, const string &T, const string &U)
{
    int N = S.length();
    int K = (T[0] - S[0] + 26) % 26;

    string rotatedU = U;

    for (int i = 0; i < N; i++)
    {
        int diff = (U[i] - S[i] + 26) % 26;

        rotatedU[i] = 'a' + (diff + K) % 26;
    }

    return rotatedU;
}

int main()
{
    int Q;
    cin >> Q;

    while (Q--)
    {
        int N;
        string S, T, U;

        cin >> N >> S >> T >> U;

        string result = rotateCipher(S, T, U);
        cout << result << endl;
    }

    return 0;
}
