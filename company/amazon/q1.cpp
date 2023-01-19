// Problem Statement: Given two strings searchWord and resultWord, find the minimum number of characters that need to be inserted at end of searchWord such that resultword is a subsequence of modified searchWord.
#include <bits/stdc++.h>
using namespace std;

int findminimumCharacters(string searchWord, string resultWord)
{
    string ans = "";
    int n1 = searchWord.size();
    int n2 = resultWord.size();
    int i = 0;
    int j = 0;
    while (j < n2 and i < n1)
    {
        if (searchWord[i] == resultWord[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    while (j < n2)
    {
        ans += resultWord[j++];
    }
    return ans.size();
}

int32_t main()
{
    cout << findminimumCharacters("armaze", "amazon") << endl;
    cout << findminimumCharacters("ab", "abd") << endl;
    return 0;
}
