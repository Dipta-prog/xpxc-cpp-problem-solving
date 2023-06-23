/*
https://www.codechef.com/problems/ALTTAB
*/
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    unordered_set<string> uniqueStrings;
    vector<string> inputStrings(t);

    for (auto &str : inputStrings)
    {
        cin >> str;
        uniqueStrings.insert(str);
    }

    string ans;
    for (int i = t - 1; i >= 0; --i)
    {
        if (uniqueStrings.count(inputStrings[i]) > 0)
        {
            ans += inputStrings[i].substr(inputStrings[i].size() - 2);
            uniqueStrings.erase(inputStrings[i]);
        }
    }

    cout << ans;

    return 0;
}
