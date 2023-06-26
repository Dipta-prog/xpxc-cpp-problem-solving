/*
https://codeforces.com/problemset/problem/71/A
*/
#include <iostream>
#include <string>
using namespace std;

string abbreviateWord(const string &word)
{
    if (word.length() <= 10)
        return word;
    else
    {
        string abbreviation;
        abbreviation.push_back(word[0]);
        abbreviation += to_string(word.length() - 2);
        abbreviation.push_back(word[word.length() - 1]);
        return abbreviation;
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        cout << abbreviateWord(word) << "\n";
    }

    return 0;
}
