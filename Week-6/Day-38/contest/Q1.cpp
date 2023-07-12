#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int messiPoints = 2 * a + b;
    int ronaldoPoints = 2 * x + y;

    if (messiPoints > ronaldoPoints)
        cout << "Messi"
             << "\n";
    else if (ronaldoPoints > messiPoints)
        cout << "Ronaldo"
             << "\n";
    else
        cout << "Equal"
             << "\n";

    return 0;
}