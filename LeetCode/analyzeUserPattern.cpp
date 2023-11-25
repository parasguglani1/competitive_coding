#include <bits/stdc++.h>
using namespace std;
vector<int> analyzeUserPattern(vector<int> &timestamp, vector<string> &usernames, vector<string> &websites)
{
    unordered_map<string, vector<pair<int, string>>> m;
    for (int i = 0; i < timestamp.size(); i++)
    {
        m[usernames[i]].push_back({timestamp[i], websites[i]});
    }
    unordered_map<string, int> count;
    for (auto it : m)
    {
        vector<pair<int, string>> v = it.second;
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                for (int k = j + 1; k < v.size(); k++)
                {
                    count[v[i].second + "#" + v[j].second + "#" + v[k].second]++;
                }
            }
        }
    }
    vector<pair<int, string>> v;
    for (auto it : count)
    {
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    string s = v.back().second;
    stringstream ss(s);
    string word;
    while (getline(ss, word, '#'))
    {
        ans.push_back(stoi(word));
    }
    return ans;
}
int main()
{
    return 0;
}
