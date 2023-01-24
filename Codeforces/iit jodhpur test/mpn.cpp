#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
// #define int long long
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
/*
const int MAX = 1e6 + 1;
bool v[MAX];
int len, sp[MAX];

const long long MAX_SIZE = 1000001;
vector<long long> isprime(MAX_SIZE, true);
vector<long long> prime;
vector<long long> SPF(MAX_SIZE);

void manipulated_seive(int N)
{
    isprime[0] = isprime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }
        for (int j = 0; j < (int)prime.size() && i * prime[j] < N && prime[j] <= SPF[i]; j++)
        {
            isprime[i * prime[j]] = false;
            SPF[i * prime[j]] = prime[j];
        }
    }
} */

int a = 10;
const int N = 1e6 + 5;
// bool isPrime[N] = {0};
vector<bool> isPrime(N, true);
vector<int> primes;
int sieve(int n)
{

    int count = 0;
    for (int i = 2; i < n + 1; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        if (isPrime[i] == true)
        {
            count++;
            primes.pb(i);
        }
    }

    return count;
}

void pgsolve()
{

    int l, r;
    cin >> l >> r;
    int ans = 0;
    bool flag = true;
    int count = 0;
    /* int lower = lower_bound(primes.begin(), primes.end(), l) - primes.begin();
    int upper = lower_bound(primes.begin(), primes.end(), r) - primes.begin();

    // cout << lower << " " << upper << endl;
    cout << primes[lower] << " " << primes[upper] << endl;
    int mx = 0;
    if (primes[lower] > l)
    {
        mx = primes[lower] - l;
    }
    for (int i = lower; i < upper - 2; i++)
    {
        int temp = primes[i + 1] - primes[i];
        mx = max(mx, temp);
    }
    // if (primes[upper - 1] < r)
    // {
    //     mx = max(mx, r - primes[upper - 1]);
    // }
    // for (int i = 0; i < r + 1; i++)
    // {
    //     cout << primes[i] << " ";
    // }
    // cout << endl;

    cout << mx << endl; */

    for (int i = l + 1; i < r; i++)
    {
        while (flag && i < r)
        {
            flag = flag && !isPrime[i];
            if (flag)
            {
                i++;
                count++;
            }
            ans = max(ans, count);
        }
        // i--;
        // count--;
        // cout << i << " " << count << endl;
        count = 0;
        flag = true;
        ans = max(ans, count);
    }
    // for (int i = l; i <= r; i++)
    // {
    //     cout << isprime[i] << " ";
    // }

    cout << ans << endl;
    // cout << endl;
}

int32_t main()

{
    sieve(N);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("Error.txt", "w", stderr);
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
