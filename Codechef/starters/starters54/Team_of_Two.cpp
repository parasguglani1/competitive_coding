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
void pgsolve()
{
    int n;
    cin >> n;
    int a[n][5];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            a[i][j] = 0;
        }
    }

    int len;
    for (int i = 0; i < n; i++)
    {
        cin >> len;
        for (int j = 0; j < len; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int f = 0; f < n; ++f)
    {
        for (int s = 0; s < n; ++s)
        {

            set<int> cnt;
            for (int i = 0; i < 5; i++)
            {
                if (a[f][i] != 0)
                    cnt.insert(a[f][i]);
                if (a[s][i] != 0)
                    cnt.insert(a[s][i]);
            }

            if (cnt.size() == 5)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;

    /*
    int n;
        cin>>n;
        vector<pair<int,std::set<int>>> v;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            int q=k;
            set<int> s;
            while(k--){
               int x;
               cin>>x;
               s.insert(x);
            }
            pair<int,set<int>> p={q,s};
            v.push_back(p);
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                set<int> c;
                for(auto it:v[i].second) c.insert(it);
                for(auto it:v[j].second) c.insert(it);
                if(c.size()==5) flag=1;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

     */
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
