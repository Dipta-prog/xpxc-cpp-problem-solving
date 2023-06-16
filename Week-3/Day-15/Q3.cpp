/*
https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
*/
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        unordered_map<char, int> charCount;
        int maxLength = -1;
        int left = 0;
        for (int right = 0; right < s.length(); right++)
        {
            charCount[s[right]]++;

            while (charCount.size() > k)
            {
                charCount[s[left]]--;
                if (charCount[s[left]] == 0)
                    charCount.erase(s[left]);
                left++;
            }

            if (charCount.size() == k)
                maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

int main()
{
    Solution obj;
    string S;
    int K;
    cin >> S >> K;
    int length = obj.longestKSubstr(S, K);
    cout << length << endl;

    return 0;
}
