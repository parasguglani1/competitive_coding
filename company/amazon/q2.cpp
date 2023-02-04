// Given two strings s and t, return the maximum number of times you can remove target word from s
#include <bits/stdc++.h>
using namespace std;
int countMaximumOperations(string s, string t)
{
    map<char, int> mp1, mp2;
    int n1 = s.size();
    int n2 = t.size();
    for (int i = 0; i < n1; i++)
    {
        mp1[s[i]]++;
    }
    for (int i = 0; i < n2; i++)
    {
        mp2[t[i]]++;
    }
    int mn = INT_MAX;
    for (auto it : mp2)
    {
        int result = mp1[it.first] / it.second;
        mn = min(mn, result);
    }
    return mn;
}

int main()
{
    cout << countMaximumOperations("abacbc", "bca") << endl;
    cout << countMaximumOperations("mononom", "mon") << endl;
    return 0;
}
