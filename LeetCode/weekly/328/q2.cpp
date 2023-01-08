/* For a stream of integers, implement a data structure that checks if the last k integers parsed in the stream are equal to value.

Implement the DataStream class:

DataStream(int value, int k) Initializes the object with an empty integer stream and the two integers value and k.
boolean consec(int num) Adds num to the stream of integers. Returns true if the last k integers are equal to value, and false otherwise. If there are less than k integers, the condition does not hold true, so returns false.
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxKelements(vector<int> &nums, int k)
    {
        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i]);
        }
        long long int score = 0;
        int i = 0;
        while (i < k)
        {
            long long int temp = pq.top();
            score += temp;
            pq.pop();
            i++;
            pq.push(ceil(temp * 1.0 / 3));
        }
        return score;
    }

};
