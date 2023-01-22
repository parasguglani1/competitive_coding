// you are given a string S of size N.In one operation you can replace any character of the string with any other character.Find the minimum number of operations required so that no two vowels or consonants are adjacent

#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    return 0;
}

int solve(int n, string s)
{
    vector<int> vowels;
    vector<int> consonents;
    for (int i = 0; i < n; i++)
    {
        if (isVowel(s[i]))
        {
            vowels.push_back(i);
        }
        else
        {
            consonents.push_back(i);
        }
    }
    int ans1 = 0;
    int ans2 = 0;
    for (int i = 0; i < vowels.size(); i++)
    {
        if (vowels[i] % 2 == 0)
        {
            ans1++;
        }
        else
        {
            ans2++;
        }
    }
    for (int i = 0; i < consonents.size(); i++)
    {
        if (consonents[i] % 2 == 1)
        {
            ans1++;
        }
        else
        {
            ans2++;
        }
    }
    int op = min(ans1, ans2);
    return op;
};

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << solve(n, s);
    return 0;
}
