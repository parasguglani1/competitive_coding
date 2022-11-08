#include <bits/stdc++.h>
using namespace std;

int makeArrayUnique(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    int steps = 0;
    int curr = arr[0];
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] <= curr)
        {
            steps += 1-arr[i]+  curr;
            arr[i] = curr + 1;
            //             cout<<"hello"<<steps<<endl;
        }
        curr = arr[i ];
    }
    return steps;

    // Write Your Code here.
}
int makeArrayUnique(vector<int> arr, int n)
{
    int ans = 0;
    int currMax = 0;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= currMax)
        {
            ans += currMax + 1 - arr[i];
            arr[i] = currMax + 1;
        }

        currMax = arr[i];
    }

    return ans;
}
