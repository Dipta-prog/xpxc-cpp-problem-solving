#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int oddCount = 0, evenCount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        if (evenCount % 2 == 0 && oddCount % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool possible = false;
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if ((a[i] % 2 == 0 && a[j] % 2 == 0) || (a[i] % 2 == 1 && a[j] % 2 == 1))
                    {
                        possible = true;
                        break;
                    }
                }
                if (possible)
                {
                    break;
                }
            }

            if (possible)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
