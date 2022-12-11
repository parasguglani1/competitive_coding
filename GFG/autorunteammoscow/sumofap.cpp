#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countap(long long N)
    {
        // Code here.
        if (N == 1)
        {
            return 1;
        }
        long int count = 0;
        for (long int L = 1; L * (L + 1) < 2 * N; L++)
        {
            double a = (1.0 * N - (L * (L + 1)) / 2) / (L + 1);
            if (a - (int)a == 0.0)
                count++;
        }
        return count + 1;
    }
};
