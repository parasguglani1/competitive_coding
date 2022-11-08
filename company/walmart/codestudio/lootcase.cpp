#include <bits/stdc++.h>
using namespace std;
int lootCase(int l, int r)
{
    // sieve of eratosthenes
    int n = 1000;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int primecount = 0;
    int mxdigit = 0;
    int digitcount[10] = {0};
    for (int i = l + 1; i < r; i++)
    {
        if (prime[i])
        {
            primecount++;
            int temp = i;
            while (temp > 0)
            {
                int digit = temp % 10;
                digitcount[digit]++;
                temp /= 10;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        {
            if (digitcount[i] > mxdigit)
            {
                mxdigit = digitcount[i];
                ans = i;
            }
    }
}
return ans;
}
