#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define vi vector<int>
#define REPR(i, k, n) for (int i = k; i > n; --i)

class Solution
{
public:
    int toggle(int n, vector<int> &vec)
    {
        int cntone = 0, cntzro = 0;
        int res = 0;
        vi suf(n, 0);
        vi pre(n, 0);
        rep(i, n)
        {
            if (vec[i] != 1)
            {
                if (i > 0 && vec[i - 1] == 1)
                {
                    pre[i] = cntone;
                    cntone = 0;
                }
            }
            else
            {
                cntone++;
            }
        }
        if (cntone == vec.size())
        {
            return vec.size();
        }
        else
        {
            cntone = 0;
            REPR(i, n - 1, -1)
            {

                if (vec[i] != 1)
                {
                    if (i < n - 1 && vec[i + 1] == 1)
                    {
                        suf[i] = cntone;
                        cntone = 0;
                    }
                }
                else
                {
                    cntone++;
                }
            }
            rep(i, n)
            {
                if (vec[i] == 0)
                {
                    cntzro++;
                }
                else
                {
                    if (cntzro != 0)
                    {
                        res = max((cntzro + pre[i - cntzro] + suf[i - 1]), res);
                    }
                    cntzro = 0;
                }
            }
            if (cntzro != 0)
            {
                res = max((cntzro + pre[n - cntzro] + suf[n - 1]), res);
            }
            return res;
        }
    }
};
