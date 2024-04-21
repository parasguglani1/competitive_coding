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
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

void pgsolve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int minpossible=0;
    //kadane with substring length greater than 1
    int summ=accumulate(a.begin(),a.end(),0);
if(n==1)
{
    cout<<summ<<endl;
    return;
}
else if(n==2)
{
    cout<<abs(summ)<<endl;
    return;
}

//least value subarray with size greater than equal to 2
int sum=a[0]+a[1];
int minsum=sum;

for(int i=2;i<n;i++)
{
    if(sum>0)
    {
        sum=a[i]+a[i-1];
    }
    else
    {
        sum+=a[i];
    }
    minsum=min(minsum,sum);
}
// cout<<minsum<<endl;
int ans=0;
if(minsum>0)
{
    ans=summ;
}
else
{
    ans=summ+abs(2*minsum);
}

multiset<int> ms;

int cur=0;
for(auto x: a)
{
    cur+=x;
    ms.insert(cur);
}

int mn=LLONG_MAX;
cur=0;



for(int i=0;i<n-1;i++)
{
    cur+=a[i];
    auto it=ms.find(cur);
    ms.erase(it);
    int curmn=*(ms.begin());
    if(i!=0)
{curmn-=cur;
curmn+=a[i];}
    mn=min(mn,curmn);

}
ans=summ-mn+abs(mn);

cout<<ans<<endl;
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
