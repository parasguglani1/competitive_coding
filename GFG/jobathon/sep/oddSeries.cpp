#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int findNth(int n)
{
    int memo[n];
    memo[0] = 0;
    memo[1] = 1;
    //* sum of previous 2 elements sum
    for (int i = 2; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            memo[i] = 11;
            continue;
        }
        memo[i] = (memo[i - 1] + memo[i - 2]) % mod;
    }
    return memo[n]%mod;
    // return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<findNth(n)<<endl;
    return 0;
}
