/*
https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
*/

#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int search(string pat, string txt)
    {
        int patLen = pat.length();
        int txtLen = txt.length();
        vector<int> patCount(26, 0);
        vector<int> txtCount(26, 0);
        int count = 0;

        for (char c : pat)
            patCount[c - 'a']++;

        for (int i = 0; i < txtLen; i++)
        {
            txtCount[txt[i] - 'a']++;

            if (i >= patLen)
                txtCount[txt[i - patLen] - 'a']--;

            if (i >= patLen - 1)
            {
                bool isAnagram = true;
                for (int j = 0; j < 26; j++)
                {
                    if (patCount[j] != txtCount[j])
                    {
                        isAnagram = false;
                        break;
                    }
                }
                if (isAnagram)
                    count++;
            }
        }

        return count;
    }
};
