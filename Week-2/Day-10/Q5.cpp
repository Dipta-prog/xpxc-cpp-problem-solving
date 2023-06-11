/*

*/

#include <iostream>
using namespace std;

int main()
{
    long long int x, y;
    cin >> x >> y;
    long long int count = 0;

    while (x <= y)
    {
        count++;
        x = x * 2;
    }

    cout << count << '\n';
}
