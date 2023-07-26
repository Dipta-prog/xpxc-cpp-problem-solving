#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int steps = (heights[i] - H + k - 1) / k;
            if (steps <= m) {
                ans++;
            }
        }

        cout << "Output: " << ans << endl;
    }

    return 0;
}
