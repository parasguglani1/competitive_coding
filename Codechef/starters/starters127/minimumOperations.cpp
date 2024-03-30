#include <bits/stdc++.h>
using namespace std;
int count_minimum(string &s)
{

    int n = s.length();
    int ans = 0;
    int i = 0;
    while (i < n)
    {
        int j = i;
        while (s[j] == s[i] && j < n)
        {
            j++;
        }
        int diff = j - i;
        ans += diff / 2;
        i = j;
    }
    return ans;
}

vector<int> minimalOperations(vector<string> words)
{
    vector<int> ans;

    for (string &s : words)
    {
        ans.push_back(count_minimum(s));
    }

    return ans;
}
int main()
{
    return 0;
}
