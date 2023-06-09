/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int freq[26] = {0};
    for (int i = 0; i < N; i++)
    {
        char ch;
        cin >> ch;
        freq[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            char ch = 'a' + i;
            int j = 0;
            while (j < freq[i])
            {
                cout << ch;
                j++;
            }
        }
    }

    return 0;
}
