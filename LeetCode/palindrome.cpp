#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int y = x;
        if (x < 0)
        {
            return false;
        }
        int rev = 0;

        while (x > 0)
        {
            int rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        if (rev == y)
        {
            // cout << rev << " " << x << endl;
            return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout << s.isPalindrome(121) << endl;
    cout << s.isPalindrome(-121) << endl;
    cout << s.isPalindrome(10) << endl;
    cout << s.isPalindrome(-101) << endl;
    return 0;
}
