/*
https://codeforces.com/problemset/problem/102/B
*/
#include <iostream>
#include <string>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    string n;
    cin >> n;

    int count = 0;
    while (n.size() > 1)
    {
        int sum = 0;
        for (char digit : n)
            sum += digit - '0';
        n = to_string(sum);
        count++;
    }

    cout << count << endl;

    return 0;
}
