#include <bits/stdc++.h>
using namespace std;
#define endline '\n'
#define sep " "
#define FOR(i, begin, end) for (ll i = begin; i <= end; i++)
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define MODP ll(1000000009)
#define cinarr(arr, n)          \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define coutarr(arr, x, n)      \
    for (int i = x; i < n; i++) \
    {                           \
        cout << arr[i] << ' ';  \
    }
#define pb push_back
#define F first
#define S second
#define yes cout << "Yes" << endline;
#define mp make_pair
#define cin_pair_int(arr, n)     \
    for (int i = 0; i <= n; i++) \
        cin >> arr[i].first >> arr[i].second;
#define ll long long int
#define rep(i, t) for (ll i = 0; i < t; i++)
#define revall(x) x.rbegin(), x.rend()
#define all(v) v.begin(), v.end()
typedef pair<int, int> pii;
inline string intToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

ll ans = 0;

void heapify(ll arr[], ll n, ll i)
{
    ll smallest = i;
    ll l = 2 * i + 1;
    ll r = 2 * i + 2;
    if (l < n and arr[l] < arr[smallest])
        smallest = l;

    if (r < n && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        ans++;
        heapify(arr, n, smallest);
    }
}

void heapSort(ll arr[], ll n)
{
    for (ll i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (ll i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        ans++;
        heapify(arr, i, 0);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        rep(i, n)
        {
            cin >> arr[i];
        }
        heapSort(arr, n);
        cout << ans-1 << endline;
        ans = 0;
    }
}
