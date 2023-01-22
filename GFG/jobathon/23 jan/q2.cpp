#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int jumpOverArray(int N, int A[])
    {
        int nm = 1, res = 1;
        int steps = INT_MAX;
        while (nm <= 1000)
        {
            if ((A[0] & nm) == 0 && (A[N - 1] & nm) == 0)
            {
                int count = 0;
                for (int i = 0; i < N; ++i)
                {
                    if ((A[i] & nm) == 0)
                    {
                        count++;
                    }
                }

                if (count < steps)
                {
                    res = nm;
                    steps = count;
                }
            }
            nm *= 2;
        }
        return res;
    }
};

int main()
{
    int t;
    // cin >> t;
    // while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.jumpOverArray(n, a) << endl;
    }
    return 0;
}
