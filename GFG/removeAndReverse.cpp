
#include <bits/stdc++.h>
using namespace std;
string removeAndReverse(string s, int n)
{
    int n = s.length();

    int freq[26] = {0};
    for (auto it : s)
        freq[it - 'a']++;
    int start = 0, end = n - 1, count = 0;

    bool trav_start = true;
    while (start < end)
    {
        if (trav_start)
        {
            while (start < end)
            {
                if (freq[s[start] - 'a'] > 1)
                {
                    freq[s[start] - 'a']--;
                    s[start] = '0';
                    count++;
                    trav_start = false;
                    start++;
                    break;
                }
                else
                    start++;
            }
        }
        else
        {
            while (start < end)
            {
                if (freq[s[end] - 'a'] > 1)
                {
                    freq[s[end] - 'a']--;
                    s[end] = '0';
                    count++;
                    trav_start = true;
                    end--;
                    break;
                }
                else
                    end--;
            }
        }
    }

    string ans;
    for (auto it : s)
    {
        if (it != '0')
        {
            ans += it;
        }
    }

    if (count & 1)
        reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    cout << removeAndReverse(s, n);

    return 0;
}