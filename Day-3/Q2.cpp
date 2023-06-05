#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool possible = false;
    for (int i = 0; i * a <= c; i++)
    {
        if ((c - i * a) % b == 0)
        {
            possible = true;
            break;
        }
    }

    possible ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}
