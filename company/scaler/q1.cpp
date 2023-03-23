#include <bits/stdc++.h>
using namespace std;

vector<int> ch(int a)
{
    vector<int> bits(32, 0);
    while (a != 0)
    {
        int bitActive = log2(a);
        bits[bitActive] = 1;
        a -= pow(2, bitActive);
    }
    return bits;
}

int solve(int A, vector<int> &B, int C)
{
    map<int, int> fr;
    map<int, vector<int>> m;
    for (int &i : B)
    {
        fr[i]++;
        if (m.find(i) == m.end())
            m[i] = ch(i);
    }
    vector<int> aB = ch(A);
    int ans = 0;
    for (int i : B)
    {
        int cnt = 0;
        vector<int> cur = m[i];
        for (int i = 0; i < aB.size(); i++)
        {
            if (cur[i] != aB[i])
                cnt++;
        }
        if (cnt > C)
            ans++;
    }
    return ans;
}
