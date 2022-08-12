#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, bad_index;
    cin >> n >> bad_index;
    // Calculate maximum possible
    // index that can be reached
    // int ans = 0;
    int ans = n * (n + 1) / 2;

    int cur_ind = ans, count = n;

    while (1)
    {

        // Check if current index and count
        // both are greater than 0 or not
        while (cur_ind > 0 && n > 0)
        {

            // Decrement cur_ind by count
            cur_ind -= n;

            // Check if current index is
            // equal to B or not
            if (cur_ind == bad_index)
            {

                // Restore to previous index
                cur_ind += n;
            }

            // Decrement count by one
            n--;
        }

        // If it reaches the 0th index
        if (cur_ind <= 0)
        {

            // Print result
            cout << ans << endl;
            break;
        }
        // If max index fails to
        // reach the 0th index
        else
        {

            n = count;

            // Store ans - 1 in current index
            cur_ind = ans - 1;

            // Decrement max index
            ans--;

            // If current index is equal to B
            if (cur_ind == bad_index)
            {

                cur_ind = ans - 1;

                // Decrement current index
                ans--;
            }
        }
    }

    // if (ans == bad_index)
    //     ans--;
    // if (bad_index == n||bad_index == 1)
    //     ans--;
    // {
    //     ans--;
    // }
    // if(bad_index==n)
    // {
    //     ans--;
    // }

    // cout << ans << endl;

    return 0;
}
