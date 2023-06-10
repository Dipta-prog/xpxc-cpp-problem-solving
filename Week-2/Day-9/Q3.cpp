/*
https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en
*/
#include <iostream>
#include <string>
using namespace std;

int countABC(string S)
{
    int count = 0;
    int n = S.length();

    for (int i = 0; i < n - 2; i++)
        if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')
            count++;

    return count;
}

int main()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    int occurrences = countABC(S);
    cout << occurrences << endl;

    return 0;
}
