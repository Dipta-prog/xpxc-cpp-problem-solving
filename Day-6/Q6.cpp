/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
*/
#include <iostream>
#include <vector>
using namespace std;

void countOccurrences(const vector<int> &arr, int M)
{
    vector<int> frequency(M + 1, 0);

    for (int i = 0; i < arr.size(); i++)
        frequency[arr[i]]++;

    for (int i = 1; i <= M; i++)
        cout << frequency[i] << endl;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    countOccurrences(arr, M);

    return 0;
}
