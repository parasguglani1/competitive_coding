// Bit_Optimizer

// Hello!! Stalker---->STOP STALKING :)

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <chrono>
#include <complex>
#define ub upper_bound
#define lb lower_bound
#define endl "\n"
#define ll long long
#define lli long long int

#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vector<char>>
#define vpll vector<pair<ll, ll>>
#define pii pair<int, int>
#define mll map<ll, ll>
#define pll pair<ll, ll>

#define PI 3.141592653589793238462 // double PI=2*asin(1.0);
#define mod 1000000007
// #define mod 998244353
// #define p 1000000000000000001
#define INF 10000007
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define clz __builtin_clz
#define clzll __builtin_clzll
#define ctz __builtin_ctz
#define ctzll __builtin_ctzll
#define pcount __builtin_popcount
#define pcountll __builtin_popcountll
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define repe(i, a, b) for (ll i = a; i <= b; i++)
#define dep(i, a, b) for (ll i = a; i >= b; i--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dne cout << -1 << endl

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // datatype
                                                                                                    // less, greater, less_equal
// Element at position-->*A.find_by_order()
// count smaller elements--->A.order_of_key()
// lower & upper bound-->*A.lower_bound()

const ll inf = 1e9 + 7;
// vi isprime(10000000 , 1);
// vi g(10000000, 0);

//***********************************************************************************************
// Hello!! Stalker---->STOP STALKING :)

// Euclid's algorithm----O(logN)
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

// Hello!! Stalker---->STOP STALKING :)
// LCM
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }

// Hello!! Stalker---->STOP STALKING :)
// Prime factorisation----O(sqrt(n))
vpll primefact(ll n)
{
    vpll pfact;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            ll cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            pfact.pb({i, cnt});
        }
    if (n > 1)
        pfact.pb({n, 1});
    return pfact;
}

// Hello!! Stalker---->STOP STALKING :)
// Binary Exponentiation(recursive)---divide & conquer-----> O(log b)
ll powerRec(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll store = powerRec(a, b / 2);
    if (b & 1)
    {
        return (a * ((store * store) % mod)) % mod;
    }
    else
    {
        return (store * store) % mod;
    }
}

// Hello!! Stalker---->STOP STALKING :)
// Binary Exponentiation(iterative)---divide & conquer-----> O(log b)
ll powerIter(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a);
        }
        a = (a * a);
        b >>= 1;
    }
    return ans;
}

//
ll inv(ll i)
{
    if (i == 1)
        return 1;
    return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;
}

ll mod_mul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}

ll mod_add(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}

//
// Hello!! Stalker---->STOP STALKING :)
//  Sieve of Erastosthenes---> O(n* log(logn))
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}

// Hello!! Stalker---->STOP STALKING :)
// sum_of_digits
ll sum_of_digits(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Hello!! Stalker---->STOP STALKING :)
//  Prime or not-----O(sqrt(n))
bool isPrime(ll n)
{
    if (n == 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Hello!! Stalker---->STOP STALKING :)
// Perfect square or not----->O(1)
bool prfSq(ll n)
{
    if (ceil(double(sqrt(n)) == floor(double(sqrt(n)))))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Hello!! Stalker---->STOP STALKING :)
// factorial of a no.----->O(n)
vll factt(ll n)
{
    vll fact(n + 1, 1);

    ll factorial = 1;
    for (ll i = 1; i <= n; i++)
    {
        (fact[i] = (fact[i - 1] * i)) %= mod;
    }

    return fact;
}

//
ll sqrtt(ll x)
{
    ll left = 0, right = 2000000123;
    while (right > left)
    {
        ll mid = (left + right) / 2;

        if (mid * mid > x)
            right = mid;
        else
            left = mid + 1;
    }
    return left - 1;
}
//

// Hello!! Stalker---->STOP STALKING :)
//  regulr bracket string or not
bool regular(string a)
{
    ll cnt = 0;
    for (ll i = 0; i < a.length(); i++)
    {
        if (a[i] == '(')
            cnt++;
        else
            cnt--;
        if (cnt < 0)
            return false;
    }

    if (cnt > 0)
        return false;
    return true;
}

// Hello!! Stalker---->STOP STALKING :)
// Reverse a number
vector<int> reverse_no(ll n)
{
    vi v;
    ll ans = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        v.pb(rem);
        ans = ans * 10 + rem;
        n /= 10;
    }
    return v;
}
//**************************************************************************************************

// Hello!! Stalker---->STOP STALKING :)
ll countPrimes(ll n)
{
    if (n < 2)
        return 0;
    int count = 0;
    vector<bool> primes(n, 1);
    primes[0] = false;
    primes[1] = false;
    for (ll i = 2; i < n; i++)
    {
        if (primes[i])
        {
            count++;
            for (ll j = i * i; j < n; j += i)
                primes[j] = 0;
        }
    }

    return count;
}

// Hello!! Stalker---->STOP STALKING :)
int countDigit(int n)
{

    int count = 0;

    while (n != 0)

    {

        n = n / 10;

        ++count;
    }

    return count;
}

// Hello!! Stalker---->STOP STALKING :)
//  number is power of 2 or not
bool check(ll n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

// ll find_ncr(ll n, ll r)
// {
//  ll ans=fact(n)/(fact(r)*fact(n-r));
//  return ans;
// }
//************************************************************************************

//**************************************************************************************

// Hello!! Stalker---->STOP STALKING :)
bool ispalindrome(string s)
{
    ll i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
            break;
        }
        i++;
        j--;
    }
    return true;
}

void calculate()
{
}

bool comp(pair<int, string> &a, pair<int, string> &b)
{

    if (a.first < b.first)
        return true;
    else if (a.first > b.first)
        return false;
    else
        return a.second < b.second;
}

//*******************************************************************************************

// ***************************************************************

// Hello!! Stalker---->STOP STALKING :)
int highestPowerof2(int n)
{
    int p = (int)log2(n);
    return (int)pow(2, p);
}
//**************************************************************************

// Hello!! Stalker---->STOP STALKING :)

string findTime(string T, int K)
{

    // convert the given time in minutes
    string ans = "";
    int minutes = ((T[0] - '0') * 10 + T[1] - '0') * 60 + ((T[3] - '0') * 10 + T[4] - '0');

    // Add K to current minutes
    minutes += K;

    // Obtain the new our
    // and new minutes from minutes
    int hour = (minutes / 60) % 24;

    int min = minutes % 60;
    string c = to_string(hour);
    // Print the hour in appropriate format
    if (hour < 10)
    {

        ans += "0";
        ans += c;
    }
    else
    {
        ans += c;
    }
    string w = to_string(min);
    // Print the minute in appropriate format
    if (min < 10)
    {

        ans += "0";
        ans += w;
    }
    else
    {
        ans += w;
    }
    return ans;
}

bool isDiv11(string num)
{
    int n = num.length();
    long odd_sum = 0, even_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            odd_sum += num[i] - '0';
        }
        else
        {
            even_sum += num[i] - '0';
        }
    }
    if (odd_sum == even_sum)
        return true;
    return false;
}

void build(ll ind, ll low, ll high, ll arr[], ll seg[])
{
    if (low == high)
    {
        seg[ind] = arr[low];
        return;
    }

    ll mid = (low + high) >> 1;
    build(2 * ind + 1, low, mid, arr, seg);
    build(2 * ind + 2, mid + 1, high, arr, seg);
    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
}

ll query(ll ind, ll low, ll high, ll l, ll r, ll seg[])
{

    // No overlap
    // l r low high or low high l r
    if (r < low || high < l)
        return 0;

    // Complete overlap
    // l low high r
    if (low >= l && high <= r)
        return seg[ind];

    ll mid = (low + high) >> 1;
    ll left = query(2 * ind + 1, low, mid, l, r, seg);
    ll right = query(2 * ind + 2, mid + 1, high, l, r, seg);
    return left + right;
}

bool isvowel(char x)
{
    int p = int(x);
    if (x == 97 || x == 101 || x == 105 || x == 111 || x == 117 || x == 65 || x == 69 || x == 73 || x == 79 || x == 85)
        return true;
    else
        return false;
}

//

bool valid_index(ll i, ll j, ll n, ll m)
{
    if (i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return false;
}

//

ll f(ll ind, vll &dp)
{
    if (ind == 0)
        return 1;
    if (ind == 1)
        return 1;
    ll left = f(ind - 1, dp);
    ll right = f(ind - 2, dp);
    return left + right;
}

ll find(vll v)
{
    ll curr = 0, best = 0;
    rep(i, 0, v.size())
    {
        curr += v[i];
        if (curr < 0)
            curr = 0;
        best = max(best, curr);
    }
    return best;
}

//
string digitsNum(int N)
{
    int p = 0;
    string s;
    string w = "yes";
    while (p + 9 < N)
    {
        s += '9';
        p += 9;
    }
    int rem = N - p;
    if (rem > 0)
        s += to_string(rem);

    reverse(s.begin(), s.end());
    // cout<<s<<endl;
    while (N--)
        s += '0';

    return s;
}

//
vll dijkstra(ll V, vpll A[], ll S)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vll dist(V + 1, 1e9 + 7);
    dist[S] = 0;
    pq.push({0, S});
    while (!pq.empty())
    {
        ll dis = pq.top().first;
        ll prev = pq.top().second;
        pq.pop();

        for (auto child : A[prev])
        {
            ll next = child.f;
            ll nextDist = child.s;
            if (dist[next] > dist[prev] + nextDist)
            {
                dist[next] = dist[prev] + nextDist;
                pq.push({dist[next], next});
            }
        }
    }
    return dist;
}

//
void shortest_distance(vector<vector<int>> &d)
{
    int n = d.size();
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (d[i][k] == -1 || d[k][j] == -1)
                    continue;
                if (d[i][j] == -1)
                    d[i][j] = d[i][k] + d[k][j];
                else
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

//
pbds B;
vi toposort(ll n, vi A[])
{
    queue<ll> q;
    vi indegree(n, 0);
    for (ll i = 0; i < n; i++)
    {
        for (auto it : A[i])
            indegree[it]++;
    }

    for (ll i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    vi topo;
    ll cnt = 0;

    while (!q.empty())
    {
        ll node = q.front();
        q.pop();
        cnt++;
        topo.pb(node);

        for (auto it : A[node])
        {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
    }

    return topo;
}

//
vpll dir4 = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vpll dir8 = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, -1}};

bool valid(ll x, ll y, ll n, ll m)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(ll i, ll j, ll n, ll m, vvc &a, vvi &vis, ll &cnt)
{
    vis[i][j] = 1;
    cnt++;
    for (auto x : dir4)
    {
        ll p = i + x.f, q = j + x.s;
        if (valid(p, q, n, m) && !vis[p][q] && a[p][q] == '1')
            dfs(p, q, n, m, a, vis, cnt);
    }
}

ll f(ll ind, ll a[])
{
    if (ind == 0)
        return 0;
    ll onestep = f(ind - 1, a) + abs(a[ind] - a[ind - 1]);
    ll twostep = INT_MAX;
    if (ind > 1)
        twostep = f(ind - 2, a) + abs(a[ind] - a[ind - 2]);
    return min(onestep, twostep);
}

ll fn(ll ind, ll a[], ll n)
{
    if (ind == n - 1)
        return 0;
    ll onestep = fn(ind + 1, a, n) + abs(a[ind] - a[ind + 1]);
    ll twostep = INT_MAX;
    if (ind < n - 2)
        twostep = fn(ind + 2, a, n) + abs(a[ind] - a[ind + 2]);
    return min(onestep, twostep);
}

//
class DSU // O(4alpha)
{
    vll parent, rank, size;

public:
    DSU(ll n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);

        repe(i, 0, n) parent[i] = i;
    }

    int findUpar(ll node)
    {
        if (parent[node] == node)
            return node;
        return parent[node] = findUpar(parent[node]); // path compression
    }

    void Unionbyrank(ll u, ll v)
    {
        ll pu = findUpar(u), pv = findUpar(v);
        if (pu == pv)
            return;

        if (rank[pu] < rank[pv])
            parent[pu] = pv;
        else if (rank[pv] < rank[pu])
            parent[pv] = pu;
        else
        {
            parent[pv] = pu;
            rank[pu]++;
        }
    }

    void Unionbysize(ll u, ll v)
    {
        ll pu = findUpar(u), pv = findUpar(v);
        if (pu == pv)
            return;

        if (size[pu] < size[pv])
        {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else // equal wala bhi done
        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }

    int query()
    {
        ll ans = 0;
        ll i = 0;
        for (auto x : parent)
        {
            if (x == i)
                ans++;
            i++;
        }

        return ans;
    }
};
//
/* Iterative Function to calculate (x^y)%p
in O(log y) */
unsigned long long power(unsigned long long x,
                         int y, int p)
{
    unsigned long long res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
    // equal to p

    while (y > 0)
    {

        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,
                              int p)
{
    return power(n, p - 2, p);
}

// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;

    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;

    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

//

int main()
{

    // tanu
    ll mini = sum_of_digits(707);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);
    // // cin.ignore(); must be there when using getline(cin, s)
    ll T;
    cin >> T;

    // T=1;
    ll monk, sid = 1;

    // Hello!! Stalker---->STOP STALKING :)

    // auto it=s.find(arr[i-k]);
    //        s.erase(it);

    while (T--)
    {
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        ll c = 0;

        rep(i, 0, n) if (a[i] != b[i]) c++;

        if (c & 1)
            cout << 0 << endl;
        else
        {
            ll x = nCrModPFermat(c, c / 2, mod);
            ll p = powerRec(2, n - c);
            ll ans = mod_mul(p, x);
            cout << ans << endl;
        }
    }

    return 0;
}

// Hello!! Stalker---->STOP STALKING :)
// This is bit_optimizer here....and I am trying my best to do O(N!) in O(1) :)
