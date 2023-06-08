/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
*/
#include <bits/stdc++.h>
using namespace std;

void reverseWords(string& s) {
    istringstream iss(s);
    string word;
    
    if (iss >> word) {
        reverse(word.begin(), word.end());
        cout << word;
    }
    
    while (iss >> word) {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }
}

int main() {
    string S;
    getline(cin, S);

    reverseWords(S);

    return 0;
}
