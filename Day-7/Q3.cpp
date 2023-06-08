/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
*/
#include <iostream>
#include <vector>
using namespace std;

void countingSort(string& s) {
    vector<int> count(26, 0);

    for (char c : s) {
        count[c - 'a']++;
    }

    int index = 0;
    for (int i = 0; i < 26; i++) {
        while (count[i] > 0) {
            s[index++] = 'a' + i;
            count[i]--;
        }
    }
}

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    countingSort(S);

    cout << S << endl;

    return 0;
}
