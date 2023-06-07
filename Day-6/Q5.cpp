/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
*/
#include <iostream>
#include <vector>
using namespace std;

bool searchNumber(const vector<vector<int>> &arr, int X)
{
    int N = arr.size();
    int M = arr[0].size();

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (arr[i][j] == X)
                return true;

    return false;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> arr(N, vector<int>(M));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];

    int X;
    cin >> X;

    bool exists = searchNumber(arr, X);
    (exists) ? cout << "will not take number" << endl : cout << "will take number" << endl;

    return 0;
}
