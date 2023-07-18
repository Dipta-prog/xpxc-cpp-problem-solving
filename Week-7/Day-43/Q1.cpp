/*

*/

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        int maxRuns = M * 6;
        if (N <= maxRuns || (N <= maxRuns + 6 && N % 6 == 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

