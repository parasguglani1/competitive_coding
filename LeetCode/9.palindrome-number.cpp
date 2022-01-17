/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 *
 * https://leetcode.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (51.85%)
 * Likes:    4663
 * Dislikes: 1953
 * Total Accepted:    1.7M
 * Total Submissions: 3.3M
 * Testcase Example:  '121'
 *
 * Given an integer x, return true if x is palindrome integer.
 * 
 * An integer is a palindrome when it reads the same backward as forward.
 * 
 * 
 * For example, 121 is a palindrome while 123 is not.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: x = 121
 * Output: true
 * Explanation: 121 reads as 121 from left to right and from right to left.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: x = -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it
 * becomes 121-. Therefore it is not a palindrome.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: x = 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a
 * palindrome.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * -2^31 <= x <= 2^31 - 1
 * 
 * 
 * 
 * Follow up: Could you solve it without converting the integer to a string?
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
int i=0,j;
if(x<0){
    return false;
}
        vector<int> a(10e2);
       while (x>0)
       {
           a[i++]=x%10;
              x/=10;

       }
         j=i-1; 
         for (int i=0;i<=j;i++)
         {
              if (a[i]!=a[j] )
              {
                return false;
              }
              j--;
         }
       return true;
        
        
    }
};
// @lc code=end

