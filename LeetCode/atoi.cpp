#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int myAtoi(string s)
    {
        bool isNegative = false;
        int n = s.size();
        ll ans = 0;
        bool sign = false;
        bool white = false;
        bool capped = false;
        for (int i = 0; i < n; i++)
        {

            if (sign && (s[i] == '+' || s[i] == '-'))
            {
                break;
            }
            else if (white && s[i] == ' ')
            {
                break;
            }

            if (s[i] == ' ')
            {
                continue;
            }

            else if (s[i] == '+')
            {
                sign = true;
            }
            else if (s[i] == '-')
            {
                isNegative = true;
                sign = true;
            }

            else if (isdigit(s[i]))
            {
                white = true;
                sign = true;
                ans += s[i] - '0';
                if (ans > INT_MAX)
                {
                    capped=true;
                    ans = INT_MAX;
                    break;
                }

                ans *= 10;
            }
            else
            {
                break;
            }
        }
        if (ans != INT_MAX)
        {
            ans /= 10;
        }
        if (capped && isNegative)
        {
            ans = INT_MIN;
        }

        else if (isNegative)
        {
            ans *= -1;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string str;
    cin >> str;

    cout << s.myAtoi(str) << endl;
}
