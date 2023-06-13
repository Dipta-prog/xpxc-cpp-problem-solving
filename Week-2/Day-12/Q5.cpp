/*
https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num != x)
            result.push_back(num);
    }

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";

    return 0;
}

