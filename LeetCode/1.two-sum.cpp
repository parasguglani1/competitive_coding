// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (47.99%)
 * Likes:    27380
 * Dislikes: 876
 * Total Accepted:    5.6M
 * Total Submissions: 11.6M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers nums and an integer target, return indices of the
 * two numbers such that they add up to target.
 *
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 *
 * You can return the answer in any order.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Output: Because nums[0] + nums[1] == 9, we return [0, 1].
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [3,3], target = 6
 * Output: [0,1]
 *
 *
 *
 * Constraints:
 *
 *
 * 2 <= nums.length <= 10^4
 * -10^9 <= nums[i] <= 10^9
 * -10^9 <= target <= 10^9
 * Only one valid answer exists.
 *
 *
 *
 * Follow-up: Can you come up with an algorithm that is less than O(n^2) time
 * complexity?
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> index;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            int k = target - nums[i];
            for (int j = i + 1; j < size; j++)
            {
                if (nums[j] == k)
                {
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
            if (index.size() == 2)
                break;
        }
        return index;
    }
};
// @lc code=end
