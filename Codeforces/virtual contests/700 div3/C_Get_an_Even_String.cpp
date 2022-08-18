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
int sz = 26;

void pgsolve()
{
    string s;
    cin >> s;
/*
not working because it needs to check consecutive even
  map<char, int> m;
    rep(i, sz(str))
    {

        m[str[i]]++;
    }
    int count = 0;
    rep(i, sz(str))
    {
        if (m[str[i]] % 2 != 0)
        {
            count++;
            m[str[i]]=0;
        }
    } */
/*
    We will act greedily: we will make an array prev consisting of 26 elements, in which we will mark prev[i]=true if the letter is already encountered in the string, and prev[i]=false otherwise. In the variable m we will store the length of the even string that can be obtained from s. We will go through the string by executing the following algorithm:

if prev[i]=false, mark prev[i]=true.
if prev[i]=true, then we already have a pair of repeating characters to add to an even string — add 2 to the number m and clear the array used.
Clearing prev is necessary because both characters that will make up the next pair must be in the s string after the current character. In other words, if the last character in the current pair was st, then the first character in the new pair can be sk, where t<k<n.

Then we calculate the answer as n−m.

 */

    int m = 0, n = (int)s.size();
    vector<bool> prev(sz, false);
    for (auto &i : s)
    {
        if (prev[i - 'a'])
        {
            m += 2;
            //clearing the array
            for (int j = 0; j < sz; j++)
                prev[j] = false;
        }
        else
            prev[i - 'a'] = true;
    }

    cout << n - m << endl;

    // cout<<count<<endl;
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
