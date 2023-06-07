/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string checkLucky(const vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> frequency;

    int minElement = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
        minElement = min(minElement, arr[i]);
    }

    return (frequency[minElement] % 2 == 1) ? "Lucky" : "Unlucky";
}

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    string result = checkLucky(arr);
    cout << result << endl;

    return 0;
}
