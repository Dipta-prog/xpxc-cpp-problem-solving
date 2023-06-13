#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int index = 0; index < test; index++)
    {
        int x;
        cin >> x;
        vector<int> array(x);
        bool e1 = false, e2 = false, o1 = false, o2 = false;

        for (int a = 0; a < x; a++)
        {
            int c;
            cin >> c;
            array[a] = c;

            if (a % 2 == 0)
            {
                if (array[a] % 2 == 0)
                    e1 = true;
                else
                    o1 = true;
            }
            else
            {
                if (array[a] % 2 == 0)
                    e2 = true;
                else
                    o2 = true;
            }
        }

        if (e1 && o1)
            cout << "NO\n";
        else if (e2 && o2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
