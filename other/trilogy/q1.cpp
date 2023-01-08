/* Given an array A of length N

Select any value from an array A and change to any other integer value

You can do the above operations no more than 2 times.

You can create another array B which contains an absolute difference of all the pairs of array A.

Your task is to minimize the sum of largest and smallest values in an array B.

Return the sum of largest and smallest value
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int solve(vector<int> &A)
    {
        int n = A.size();
        sort(A.begin(), A.end());
        int minimumdiff = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            minimumdiff = min(minimumdiff, abs(A[i]) - A[i + 1]);
        }
        int ans = 0;


        int ans1 = A[n - 3] - A[0];

        int ans2 = A[n - 1] - A[2];

        int ans3 = A[n - 2] - A[1];
        ans = min(ans1, min(ans2, ans3));
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    Solution obj;
    cout << obj.solve(A);
    return 0;
}
