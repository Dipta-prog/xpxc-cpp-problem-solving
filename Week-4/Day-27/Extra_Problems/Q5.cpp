/*
https://codeforces.com/problemset/problem/158/A
*/
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int *scores = new int[n];
    for (int i = 0; i < n; i++)
        cin >> scores[i];

    int cutoff = scores[k - 1];
    int numAdvancing = 0;
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= cutoff && scores[i] > 0)
            numAdvancing++;
        else
            break;
    }

    cout << numAdvancing << endl;

    delete[] scores;
    return 0;
}
