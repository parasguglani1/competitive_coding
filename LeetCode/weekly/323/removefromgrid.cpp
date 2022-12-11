#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        int ans = 0;
        while (grid.size() > 0)
        {
            int wholemx = 0;
            int mx = 0;
            for (int i = 0; i < grid.size(); i++)
            {
                mx = grid[i][0];
                for (int j = 0; j < grid[i].size(); j++)
                {
                    mx = max(mx, grid[i][j]);
                }
                // ans += mx;
                for (int j = 0; j < grid[i].size(); j++)
                {
                    if (grid[i][j] == mx)
                    {
                        grid[i].erase(grid[i].begin() + j);
                        break;
                    }
                }
                if (grid[i].size() == 0)
                {
                    grid.erase(grid.begin() + i);
                    i--;
                }
                wholemx = max(wholemx, mx);
            }
            ans += wholemx;
        }
        return ans;
    }
};
