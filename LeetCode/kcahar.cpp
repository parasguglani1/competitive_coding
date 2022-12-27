/* You are given a string s consisting of the characters 'a', 'b', and 'c' and a non-negative integer k. Each minute, you may take either the leftmost character of s, or the rightmost character of s.

Return the minimum number of minutes needed for you to take at least k of each character, or return -1 if it is not possible to take k of each character.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int takeCharacters(string s, int k)
    {
        int n = s.size();
        int ans = INT_MAX;
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                a++;
            if (s[i] == 'b')
                b++;
            if (s[i] == 'c')
                c++;
        }
        if (a < k || b < k || c < k)
            return -1;
        int tempa = k, tempb = k, tempc = k;
        int l = 0, r = n - 1;
        // process left
        while (tempa > 0 && tempb > 0 && tempc > 0)
        {
            if (s[l] == 'a')
                tempa--;
            if (s[l] == 'b')
                tempb--;
            if (s[l] == 'c')
                tempc--;
            l++;
        }
        // process right
        tempa = k, tempb = k, tempc = k;

        while (tempa > 0 && tempb > 0 && tempc > 0)
        {
            if (s[r] == 'a')
                tempa--;
            if (s[r] == 'b')
                tempb--;
            if (s[r] == 'c')
                tempc--;
            r--;
        }
        ans = min(l, min(l, n - r - 1));

        // process both together

        tempa = k, tempb = k, tempc = k;
        l = 0, r = n - 1;

        return ans;
    }
    // Count the number of occurrences of each character in the string


    int getMinMinutes(string s, int k)
    {
        // Count the number of occurrences of each character in the string
        int aCount = 0;
        int bCount = 0;
        int cCount = 0;
        for (char c : s.1())
        {
            if (c == 'a')
            {
                aCount++;
            }
            else if (c == 'b')
            {
                bCount++;
            }
            else if (c == 'c')
            {
                cCount++;
            }
        }

        // Return -1 if it is not possible to take k of each character
        if (aCount < k bCount < k cCount < k)
        {
            return -1;
        }

        // Initialize variables to keep track of the number of minutes taken and the current position in the string
        int minutes = 0;
        int left = 0;
        int right = s.length() - 1;

        // Take characters from the left and right of the string until we have taken k of each character
        while (aCount > k bCount > k cCount > k)
        {
            // Take the character from the left of the string if it is not 'a', 'b', or 'c'
            // or if the character from the right is 'a', 'b', or 'c'
            if (s.charAt(left) != 'a' && s.charAt(left) != 'b' && s.charAt(left) != 'c' ||
                s.charAt(right) == 'a' s.charAt(right) == 'b' s.charAt(right) == 'c')
            {
                if (s.charAt(left) == 'a')
                {
                    aCount--;
                }
                else if (s.charAt(left) == 'b')
                {
                    bCount--;
                }
                else if (s.charAt(left) == 'c')
                {
                    cCount--;
                }
                left++;
            }
            // Take the character from the right of the string
            else
            {
                if (s.charAt(right) == 'a')
                {
                    aCount--;
                }
                else if (s.charAt(right) == 'b')
                {
                    bCount--;
                }
                else if (s.charAt(right) == 'c')
                {
                    cCount--;
                }
                right--;
            }
            minutes++;
        }

        return minutes;
    }
};
int main()
{
    Solution s;
    string s1 = "aabaaaacaabc";
    int k = 2;
    cout << s.takeCharacters(s1, k) << endl;
    return 0;
}
