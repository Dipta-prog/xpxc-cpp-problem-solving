/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
*/
#include <iostream>
#include <string>
using namespace std;

// upper triangle
void printUpperTriangle(int N)
{
    for (int i = 0; i < N; i++)
    {
        string spaces(N - i - 1, ' ');
        string stars(2 * i + 1, '*');
        cout << spaces << stars << endl;
    }
}

// lower triangle
void printLowerTriangle(int N) {
    for (int i = N - 1; i >= 0; i--) {
        string spaces(N - i - 1, ' ');
        string stars(2 * i + 1, '*');
        cout << spaces << stars << endl;
    }
}


int main()
{
    int N;
    cin >> N;

    printUpperTriangle(N);
    printLowerTriangle(N);

    return 0;
}
