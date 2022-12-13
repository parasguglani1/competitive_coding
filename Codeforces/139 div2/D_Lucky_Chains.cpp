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

int MinOperation(int a[], int n, int k)
{
    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        // If array value is not 1 and it is greater than k
        // then we can increase the or decrease the
        // remainder obtained by dividing k from the ith
        // value of array so that we get the number which is
        // either closer to k or its multiple
        if (a[i] != 1 && a[i] > k)
        {
            result = result + min(a[i] % k, k - a[i] % k);
        }
        else
            // Else we only have one choice which is to
            // increment the value to make equal to k
            result = result + k - a[i];
    }

    return result;
}
void pgsolve()
{
    int a, b;
    cin >> a >> b;
    if (abs(a - b) == 1)
    {
        cout << "-1" << endl;
        return;
    }
    if (__gcd(a, b) > 1)
    {
        cout << "0" << endl;
        return;
    }
    else
    {
        int count = INT_MAX;
        int arr[] = {a, b};
        for (int i = 2; i < 1000; i++)
        {
            int temp = MinOperation(arr, 2, i);
            count = min(count, temp);
        }
//TODO optimize
        while (__gcd(a, b) == 1)
        {
            a++;
            b++;
            count++;
        }
        // cout<<a<<" "<<b<<endl;
        // cout<<__gcd(a,b)<<endl;
        cout << count << endl;
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
