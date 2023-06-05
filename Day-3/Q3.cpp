#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool possible = (a * a) + (b * b) < (c * c);
    possible ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}
