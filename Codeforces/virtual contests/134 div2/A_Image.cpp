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
    void pgsolve()
    {
        char a[4];
        rep(i, 4)
        {
            cin >> a[i];
        }
        sort(a, a + 4);
        if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
        {
            cout << 0 << endl;
        }
        else if ((a[0] == a[1] && a[2] == a[3]) || (a[0] == a[1] && a[1] == a[2]) || (a[1] == a[2] && a[2] == a[3]))

        {
            cout << 1 << endl;
        }
        else if (a[0] == a[1] || a[1] == a[2] || a[2] == a[3])
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }

        /* Let's pick a color with the maximum possible number of pixels and repaint all other pixels into it. We will try to pick all pixels of some other color and repaint them in one operation, and we can ignore the constraint that we can repaint no more than 2 pixels, since we will never need to repaint 3 or 4 pixels in one operation. So, the number of operations is just the number of colors other than the one we chosen, or just d−1, where d is the number of different colors in the image. To calculate this, we can use a set or an array of size 26, where we mark which colors are present.
        string s1, s2;
        cin >> s1 >> s2;
        s1 += s2;
        cout << set<char>(s1.begin(), s1.end()).size() - 1 << endl
 */
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
