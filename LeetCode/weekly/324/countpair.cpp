/* You are given a 0-indexed string array words.

Two strings are similar if they consist of the same characters.

For example, "abca" and "cba" are similar since both consist of characters 'a', 'b', and 'c'.
However, "abacba" and "bcfd" are not similar since they do not consist of the same characters.
Return the number of pairs (i, j) such that 0 <= i < j <= word.length - 1 and the two strings words[i] and words[j] are similar.

 */

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int similarPairs(vector<string> &words)
    {
        int n = words.size();
        int ans = 0;
        unordered_set<char> s1, s2;

        for (int i = 0; i < n; i++)
        {
            s1.clear();
            for (int k = 0; k < words[i].size(); k++)
            {
                s1.insert(words[i][k]);
            }
            for (int j = i + 1; j < n; j++)
            {
                s2.clear();

                for (int k = 0; k < words[j].size(); k++)
                {
                    s2.insert(words[j][k]);
                }
                if (s1 == s2) // if consists of same characters
                    ans++;
            }
        }
        return ans;
    }
};
