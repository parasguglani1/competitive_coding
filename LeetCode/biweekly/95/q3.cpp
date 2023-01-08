class Solution
{
public:
    int xorBeauty(vector<int> &nums)
    {
        int xorSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            xorSum ^= nums[i];
        }
        return xorSum;
    }
};
    