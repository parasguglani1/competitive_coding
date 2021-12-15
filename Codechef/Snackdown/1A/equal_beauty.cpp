#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define PI 3.1415926535897932384626
#define ps(x, y) fixed << setprecision(y) << x
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i >= n; --i)
void paras()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\Codechef\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\Codechef\\output.txt", "w", stdout);
#endif
}

int32_t main()

{
    paras();
    w(t)
    {
        int n, sp2, sp1;
        int minimum = INT_MAX;

        cin >> n;

        vector<int> A(n);
        rep(i,n)
        { cin >> A[i];}

        sort(A.begin(), A.end());

        int left = 1, right = n - 2;
        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }

        else if (n == 3)
        {
            cout << min(A[1] - A[0], A[2] - A[1]) << endl;
            continue;
        }

        int ans1 = 0, ans2 = 0;
        rep(i,n-1)
        {
            ans1 = ans1+ abs(A[i] - A[(n - 1) / 2]);
            
            }

      for (int i = 1; i < n; i++)
        {
            ans2 = ans2+ abs(A[i] - A[1 + (n - 1) / 2]);}

            minimum = min(ans1, ans2);

        while (left < right)
        {
            sp2 = A[n - 1] - A[left], sp1 = A[right] - A[0];

            minimum = min(minimum, abs(sp1 - sp2));
            if (sp1 < sp2)
                left++;
            else
                right--;
        }
    
        cout << minimum << endl;       
    
    }
    return 0;
}