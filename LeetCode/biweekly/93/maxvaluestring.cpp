#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumValue(vector<string> &strs)
    {
        int ans = 0;
        for (int i = 0; i < strs.size(); i++)

        {
            string s = strs[i];
            int count = 0;
            bool isnumber = true;
            // if s is a number then s is integer;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] < '0' || s[j] > '9')
                {
                    isnumber = false;
                }
            }
            if (isnumber)
            {
                int num = stoi(s);
                ans = max(ans, num);
            }
            else
            {
                int len = s.length();
                ans = max(ans, len);
            }
        }
    }
};
