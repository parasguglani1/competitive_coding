//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long int wineSelling(vector<int> &arr, int N)
    {
        int seller = 0;
        int buyer = 0;
        int i = 0;
        int steps = 0;
        int work = 0;

        while (i < N)
        {
            if (arr[i] < 0)
            {
                buyer = i;
                break;
            }
            i++;
        }
        i = 0;
        while (i < N)
        {
            if (arr[i] > 0)
            {
                seller = i;
                break;
            }
            i++;
        }
        i = 0;
        while (seller < N || buyer < N)
        {
            if (abs(arr[buyer]) > arr[seller])
            {
                steps += arr[seller] * abs(buyer - seller);
                arr[buyer] += arr[seller];
                seller++;
                while (seller < N && arr[seller] <= 0)
                {
                    seller++;
                }
            }
            else if (abs(arr[buyer]) < arr[seller])
            {
                steps += -1 * arr[buyer] * abs(buyer - seller);
                arr[seller] += arr[buyer];
                buyer++;
                while (buyer < N && arr[buyer] >= 0)
                {
                    buyer++;
                }
            }
            else
            {
                steps += -1 * arr[buyer] * abs(buyer - seller);
                buyer++;
                seller++;
                while (buyer < N && arr[buyer] >= 0)
                {
                    buyer++;
                }
                while (seller < N && arr[seller] <= 0)
                {
                    seller++;
                }
            }
        }
        return steps;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr, n);

        cout << ans << endl;
    }
}
// } Driver Code Ends
