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
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void pgsolve()
{
    int n;
    cin>>n;
    vi a(n);
    rep(i,n)
    {
        cin>>a[i];
    }
    bool issame=true,isone=false;
    int temp=a[0];

    rep(i,n)
    {
        if(a[i]!=temp)
        {
            issame=false;
        }
        if(a[i]==1)
        {
            isone=true;
        }
    }
    if(issame||n==1)
    {
        cout<<0<<endl;
        return;
    }
    if(isone)
    {
        cout<<-1<<endl;
        return;
    }

    vector<pair<int,int>> ans;

    int mn=*min_element(all(a));
    int mx=*max_element(all(a));
    while(mn!=mx)
    {
        int mnindex=min_element(all(a))-a.begin();
        int mxindex=max_element(all(a))-a.begin();
        a[mxindex]=ceil(a[mxindex]*1.0/a[mnindex]);
        ans.pb({mxindex+1,mnindex+1});
        mn=*min_element(all(a));
        mx=*max_element(all(a));
        // cout<<mn<<" "<<mx<<endl;
    }
    cout<<sz(ans)<<endl;
    rep(i,sz(ans))
    {
        cout<<ans[i].ff<<" "<<ans[i].ss<<endl;
    }



}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
	freopen("Error.txt", "w", stderr);
#endif

    w(t)
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
