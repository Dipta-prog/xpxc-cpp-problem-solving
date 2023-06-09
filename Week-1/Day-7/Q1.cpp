/*
https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int front = 0;
    int end = n - 1;

    while (front <= end)
    {
        cout << arr[front++] << " ";
        if (front <= end)
            cout << arr[end--] << " ";
    }

    cout << endl;

    return 0;
}
