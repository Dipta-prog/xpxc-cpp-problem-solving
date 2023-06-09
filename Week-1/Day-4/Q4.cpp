/*
https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string line(N, '*');
        line[i] = '\\';
        line[N - i - 1] = '/';
        
        if (i == N / 2) {
            line[i] = 'X';
        }
        
        cout << line << endl;
    }

    return 0;
}
