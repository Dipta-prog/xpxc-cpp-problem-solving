/*
https://www.spoj.com/problems/OLOLO/en/
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int findUniquePyani(int n)
{
    unordered_map<int, int> countMap;

    for (int i = 0; i < n; i++)
    {
        int pyani;
        cin >> pyani;
        countMap[pyani]++;
    }

    for (auto it = countMap.begin(); it != countMap.end(); it++)
        if (it->second == 1)
            return it->first;

    return -1;
}

int main()
{
    int n;
    cin >> n;

    int uniquePyani = findUniquePyani(n);
    (uniquePyani != -1) ? cout << uniquePyani << endl : cout << "No unique pyani found" << endl;

    return 0;
}
