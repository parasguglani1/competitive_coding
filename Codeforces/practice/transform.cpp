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
string decToBinary(ll n)
{
    // array to store binary number
    // ll binaryNum[32];
    // ll *binaryNum = new ll[32];
    string binaryNum = "";

    // counter for binary array
    // ll i = 0;
    while (n > 0)
    {

        // storing remainder in binary array
        char a = n % 2 + '0';
        binaryNum.push_back(a);
        n = n / 2;
        // i++;
    }
    reverse(binaryNum.begin(), binaryNum.end());
    // cout << binaryNum << endl;

    // prlling binary array in reverse order
    // for (ll j = i - 1; j >= 0; j--)
    //     cout << binaryNum[j];
    return binaryNum;
}
void pgsolve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<string> v2(n);

    transform(v.begin(), v.end(), v2.begin(), ::decToBinary);

    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << endl;
    }
    // cout << s2 << endl;
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
