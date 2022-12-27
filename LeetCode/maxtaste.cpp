/*  are given an array of positive integers price where price[i] denotes the price of the ith candy and a positive integer k.

The store sells baskets of k distinct candies. The tastiness of a candy basket is the smallest absolute difference of the prices of any two candies in the basket.

Return the maximum tastiness of a candy basket */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumTastiness(vector<int> &price, int k)
    {
        int n = price.size();
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int j = i + k - 1;
            if (j < n)
            {
                int l = i;
                int r = j;
                int minDiff = INT_MAX;
                while (l < r)
                {
                    minDiff = min(minDiff, abs(price[l] - price[r]));
                    l++;
                    r--;
                }
                ans = max(ans, minDiff);
            }
        }
        return ans;

    }
};

int main()
{
    Solution s;
    /* price = [13,5,1,8,21,2], k = 3
     */
    vector<int> price = {13, 5, 1, 8, 21, 2};
    int k = 3;
    cout << s.maximumTastiness(price, k) << endl;
}
