/*
https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
*/
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int index)
{
    int left = 0;
    int right = index;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] == 0)
            reverseArray(arr, i - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
