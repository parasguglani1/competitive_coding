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
    string a, b;
    cin >> n >> a >> b;
    // cout<<a<<" "<<b<<endl;
    int acnt1 = 0, bcnt1 = 0, acnt2 = 0, bcnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'a')
        {
            acnt1++;
        }
        else if (a[i] == 'b')
        {
            bcnt1++;
        }
        if (a[i] == 'b' && b[i] != 'b')
        {
            no return;
        }

        if (b[i] == 'a')
        {
            acnt2++;
        }
        else if (b[i] == 'b')
        {
            bcnt2++;
        }
    }
    int ccnt1 = n - acnt1 - bcnt1;
    int ccnt2 = n - acnt2 - bcnt2;

    if (a == b)
    {
        yes;
        return;
    }
    if (bcnt1 == 0)
    {
        no;
        return;
    }

    if (acnt1 != acnt2 or bcnt1 != bcnt2)
    {
        no;
        return;
    }
    // cout<<"here"<<endl;
    vector<int> aind, bind, cind;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] )
        {
            if (b[i] == 'b')
                {bind.pb(i);}
        }
        else
        {
            if (a[i] == 'a')
            {
                aind.pb(i);
            }

            else if (a[i] == 'c')
            {
                cind.pb(i);
            }
        }
    }
    for (int i = 0; i < aind.size(); i++)
    {
        int l = aind[i];
        int r = cind[i];
        auto ind = lower_bound(bind.begin(), bind.end(), l) - bind.begin();
        if (ind >= bind.size())
        {
            no return;
        }
        if (bind[ind] < r)
        {
            continue;
        }
        else
        {
            no return;
        }
    }
    yes;

    // yes
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
