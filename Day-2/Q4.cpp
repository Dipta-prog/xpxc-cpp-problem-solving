#include <iostream>
using namespace std;

int main()
{
    string ch;
    cin >> ch;
    int sum = 0, id;
    for (int i = 0; i < ch.length(); i++)
    {
        if (ch[i] == '.')
        {
            id = i;
            break;
        }
        sum = sum * 10 + (ch[i] - '0');
    }
    ch[id + 1] >= '5' ? cout << sum + 1 : cout << sum;
}
