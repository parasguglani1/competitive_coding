#include <bits/stdc++.h>
using namespace std;

int getMaximumMEX(vector<int> arr)
{
    // A new game is launched in HackerGames where the player is given an array of n of integers arr and is allowed to reduce any element arr[i] to an integer x such that 0 ≤ x ≤ arr[i].

    // Find the maximum possible MEX of the array arr that can be achieved by performing the operation any number of times.

    // Consider, n = 3, arr = [3, 2, 3].

    // One optimal set of operations follows.

    // Reduce arr[0] to 0
    // Reduce arr[1] to 1
    // Reduce arr[2] to 2

    // Now, arr = [0, 1, 2], and its MEX is 3, which is the maximum possible MEX. Return 3.
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int mex = 0;
    set<int> s;
    int curr = 0;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == curr)
        {
            visited[i] = true;
            curr++;
        }
        else
        {
            s.insert(arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (s.find(curr) != s.end())
            {
                curr++;
            }
            else
            {
                break;
            }
        }
    }
    return curr;
    
    // get mex and reduce all elements to mex+i
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << getMaximumMEX(arr);

    return 0;
}
