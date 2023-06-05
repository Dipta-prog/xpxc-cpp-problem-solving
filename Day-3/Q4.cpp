/*
https://atcoder.jp/contests/abc193/tasks/abc193_a?lang=en
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;

    double discountPercentage = ((A - B) / A) * 100;
    cout << fixed << setprecision(12) << discountPercentage << endl;

    return 0;
}
