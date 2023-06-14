#include <iostream>
using namespace std;

int main()
{
    int X, N, M;
    cin >> X >> N >> M;
    (X >= N || X + M >= N) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
