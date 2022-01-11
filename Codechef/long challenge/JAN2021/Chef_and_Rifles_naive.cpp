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

void swap_array(int n, int a[]) {
    vi arr(n);
       int j=0;

    for (int i = 0; i < n; i=i+2,j++)
    {
        arr[j]=a[i];

    }

    for (int i = 1; i < n; i=i+2)
    {
        arr[j]=a[i];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        a[i]=arr[i];
    }

        rep(i, n) cout << a[i] << " ";
        cout<<endl;


}
void pgsolve()
{
    int i, n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, n)
    {
        a[i] = i+1;
    }
    vi arr(n);
    int j=0;

    rep(i, n) cout << a[i] << " "; 
    cout<<endl;
    while(k--){
    swap_array(n, a.data());
    }
    rep(i, n) cout << a[i] << " ";
    cout << endl;
cout << endl;

}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
	freopen("Error.txt", "w", stderr);
#endif

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}