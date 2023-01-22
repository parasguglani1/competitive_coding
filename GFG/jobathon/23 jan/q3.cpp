#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vi vec, differences;
    vi visited;
    ll dfs(int x, vi v[], vi &val)
    {
        visited[x] = 1;

        vi temp;
        for (int i = 0; i < v[x].size(); ++i)
        {
            int children = v[x][i];
            if (visited[children] == 0)
            {
                vec[x] += dfs(children, v, val);
                temp.push_back(vec[children]);
            }
        }

        sort(temp.begin(), temp.end());
        if (temp.size() == 0)
        {
            differences[x] = 0;
        }
        else
        {
            differences[x] = abs(temp.back() - temp[0]);
        }
        vec[x] += val[x];
        return vec[x];
    }

    vector<long long> differenceTree(int n, vi &p, vi &vals)
    {
        vi v[n + 2];
        for (int i = 1; i < p.size(); ++i)
        {
            v[i].push_back(p[i] - 1);
            v[p[i] - 1].push_back(i);
        }

        differences.clear();
        differences.resize(n + 2, 0);
        visited.clear();
        visited.resize(n + 2, 0);
        vec.clear();
        vec.resize(n + 2, 0);
        dfs(0, v, vals);

        vector<long long> ans1;
        for (int i = 0; i < differences.size() && i < n; ++i)
        {
            ans1.push_back(differences[i]);
        }
        return ans1;
    }
};
