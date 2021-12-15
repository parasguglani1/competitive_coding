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
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
void paras()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\competitive_coding\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\competitive_coding\\output.txt", "w", stdout);
#endif
}

        
bool comparator(const pair<int, int> &x, const pair<int, int> &y)
{
    if (x.ss == y.ss)
        return (x.ff < y.ff);
    else
        return (x.ss > y.ss);
}

int32_t main()

{
    paras();
   


    int size, i, j;
    cin >> size;
    vector<pair<int,int>> vect;
    int a[size], b[size];
    rep(i,size)

    {
        cin >> a[i];
    }
      rep(i,size)
    {
        cin >> b[i];
    }

      rep(i,size)
    {
        vect.pb(mp(a[i], b[i]));
    }

    sort(vect.begin(), vect.end(), comparator);
    rep(i,size)
    
    {
        cout << vect[i].ff << " " << vect[i].ss << " ";
    }

    
    return 0;
}