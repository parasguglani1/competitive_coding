#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> &a,
         pair<char, int> &b)
{
    return a.second > b.second;
}

int sort(map<char, int> &M)
{

    vector<pair<char, int>> A;
    for (auto &it : M)
    {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

    int count = 0;
    int index = 0;
    for (auto &it : A)
    {
        if (index < 9)
        {
            count += it.second;
        }
        else if (index < 18)
        {
            count += it.second * 2;
        }
        else
        {
            count += it.second * 3;
        }
        index++;
    }
    return count;
}

int minimumKeypadClickCount(string text)
{
    map<char, int> m;
    for (int i = 0; i < text.length(); i++)
    {
        m[text[i]]++;
    }
    return sort(m);
}