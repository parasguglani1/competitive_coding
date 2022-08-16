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
void pgsolve()
{
/*     First note that parts of the picture separated by W are independent. That is, any stamps used on one part doesn't have any impact on the other, since a character W means no stamp has been placed on that cell. So let's split the string by Ws (for example, with split() method in Python), and consider the resulting strings containing only R and B. Call one of these parts p.

In the final stamp we place on p, we must have placed RB, so it should have both the characters R and B. Therefore, if the string has only R or only B, the answer is NO.

Otherwise, the answer is YES. Let's show it. As we have just shown, we must have R next to B for the string to be possible. Consider the way to make RBRRBBBB. The final stamp can be RBRRB–––BBB. For the rest of the cells, we can make them one by one as below.
WWWWWWWW→RB–––WWWWWW→RBR–––WWWWW→RBRB–––WWWW,
so now we have made the prefix of the string before the final stamp. Similarly:
RBRBWWWW→RBRBWWRB–––→RBRBWRB–––B→RBRBRB–––BB.
Now we have made the prefix and the suffix by stamping "one character" at a time (actually, we stamp two characters, but then cover it up with another stamp).

Finally, we can put the final stamp to make the whole string.
RBRBRBBB→RBRRB–––BBB.
This method easily generalizes to any string. We can find the final stamp and then make the prefix and suffix one by one. The solution runs in O(n).

 */



    int n;
    cin >> n;
    string s;
    cin >> s;
    int cntb = 0, cntr = 0;
    s += 'W';
    for (int i = 0; i <= n; ++i)
    {
        if (s[i] != 'W')
        {
            if (s[i] == 'R')
                cntr++;
            else
                cntb++;
        }
        else
        {
            if ((cntr == 0 || cntb == 0) && cntr + cntb != 0)
            {
                cout << "NO\n";
                return;
            }
            cntr = 0;
            cntb = 0;
        }
    }
    cout << "YES\n";
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
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
