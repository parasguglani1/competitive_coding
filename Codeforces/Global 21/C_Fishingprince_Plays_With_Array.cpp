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
#define vpi vector<pair<int, int>>
/*
Call the first operation "expand" and the second operation "shrink".

Keep doing expand on both arrays until we can't do expand anymore, call the resulting arrays a′ and b′. It suffices to check if a′=b′. To implement this, you need to compress contiguous equal numbers.

Proof of why this is necessary and sufficient:

Sufficiency is obvious, since the operations are reversible. We can do something like a→a′=b′→b.

Necessity: Let f(a)=a′. It suffices to prove that an operation on a does not affect f(a). An expand operation obviously doesn't affect f(a). A shrink operation shrinks a[i,i+m−1] into one element. When computing f(a′), we will always expand a′i at some time, so the result is the same as $f(a)$​.

Time complexity is O((n+k)logmV), where  V=maxai  */
void pgsolve()
{
    int n, k;
    cin >> n >> k;
    vpi listA, listB;
    int ele = 5;
    int S1 = 0, S2 = 0;
    rep(i, n)
    {
        cin >> ele;
        S1 += ele;
        int size1 = listA.size();
        if (i != 0 && listA[size1 - 1].ff == ele)
            listA[size1 - 1].ss++;
        else if (ele % k == 0)
        {
            int dig = 1, c;
            while (ele % k == 0)
            {
                dig *= k;
                c = ele / k;
                ele /= k;
            }
            if (i != 0 && listA[listA.size() - 1].ff == c)
                listA[listA.size() - 1].ss += dig;
            else
                listA.pb({c, dig});
        }
        else
            listA.pb({ele, 1});
    }
    cin >> n;
    rep(i, n)
    {
        cin >> ele;
        S2 = S2 + ele;
        int size2 = listB.size();
        if (i != 0 && listB[size2 - 1].ff == ele)
            listB[size2 - 1].ss += 1;
        else if (ele % k == 0)
        {
            int dig = 1, c;
            while (ele % k == 0)
            {
                dig *= k;
                c = ele / k;
                ele /= k;
            }
            if (i != 0 && listB[size2 - 1].ff == c)
            {
                listB[size2 - 1].ss += dig;
            }
            else
                listB.pb({c, dig});
        }
        else
            listB.pb({ele, 1});
    }

    bool flag = true;
    if (S1 != S2 || listB.size() != listA.size())
        flag = false;
    else
    {
        for (int i = 0; i < listA.size(); i++)
        {
            if (listA[i].ff != listB[i].ff || listA[i].ss != listB[i].ss)
                flag = false;
        }
    }
    if (flag == true)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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