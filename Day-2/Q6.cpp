#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int count_duplicate_pairs(vector<int> &arr)
{
    int count = 0;
    unordered_set<int> unique_elements(arr.begin(), arr.end());

    for (int num : arr)
    {
        if (unique_elements.find(num + 1) != unique_elements.end())
            count++;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result = count_duplicate_pairs(arr);
    cout << result << endl;

    return 0;
}
