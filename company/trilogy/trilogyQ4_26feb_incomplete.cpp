#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;
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
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
int start=1,endd=1;
int kadane3(vector<int> a, int n,vi &dp)
{
        int max_ending_here = a[1];
    int max_so_far = a[1];
    int _start = 1;

    for(int i=1; i<a.size()-1; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0) {
            max_ending_here = a[i];
            _start = i;
        }

        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
            start = _start;
            endd = i;
        }
    }
return max_so_far;
}
vi dp(1e5,-1);
void pgsolve()
{
    int n;
    cin>>n;
    vi a(n);
    rep(i,n)
    {
        cin>>a[i];
    }
int midsum=    kadane3(a,n,dp);
int presum=LLONG_MIN,curpresum=0,suffsum=LLONG_MIN,cursuffsum=0;
REP(i,0,start)
{
    curpresum+=a[i];
    presum=max(curpresum,presum);
    // if(curpresum<0)
    // {
    //     curpresum=0;
    // }

}
REPR(i,n-1,endd)
{
    cursuffsum+=a[i];
    suffsum=max(cursuffsum,suffsum);
    // if(cursuffsum<0)
    // {
    //     cursuffsum=0;
    // }

}
int msum=0;
REP(i,start,endd+1)
{
    msum+=a[i];
}
cout<<start<<" "<<endd<<endl;
cout<<presum<<" "<<msum<<" "<<suffsum<<endl;
cout<<msum+suffsum+presum<<endl;
    // REP(i,1,n-1)
    // {
    //     cout<<dp[i]<<" ";
    // }
    // cout<<endl;

}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
#endif

    // w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
