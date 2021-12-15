    #include <bits/stdc++.h>
    using namespace std;

    #define ff first
    #define ss second
    #define int long long
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
    #define sortall(x) sort(all(x))
    #define rep(i, n) for (int i = 0; i < n; ++i)
    #define REP(i, k, n) for (int i = k; i <= n; ++i)
    #define REPR(i, k, n) for (int i = k; i >= n; --i)
    #define pb              push_back
    #define mp              make_pair
    #define pii             pair<int,int>
    #define vi              vector<int>
    void paras()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("D:\\Programming\\ds\\competitive_coding\\input.txt", "r", stdin);
        freopen("D:\\Programming\\ds\\competitive_coding\\output.txt", "w", stdout);
    #endif
    }

    int32_t main()

    {
        paras();
        int n, m,AL_pointer = 0, BOB_pointer = 0, free = 0;

        cin >> n >> m;

        vector<vi> ALI, BOB;

        rep(i,n)
        {
            int x, y;
            vi temp;
        
            cin >> x >> y;
            temp.pb(x);
            temp.pb(y);
            ALI.pb(temp);
        }

        rep(i,m)
        {
            int x, y;
            vi temp;
            cin >> x >> y;
            temp.pb(x);
            temp.pb(y);
            BOB.pb(temp);
        }

        vi temp(2);

        sort(ALI.begin(), ALI.end());
        sort(BOB.begin(), BOB.end());


        while ((AL_pointer < ALI.size()) && (BOB_pointer < BOB.size()))
        {
            temp[0] = max(ALI[AL_pointer][0], BOB[BOB_pointer][0]);
            temp[1] = min(BOB[BOB_pointer][1], ALI[AL_pointer][1]);

            if (temp[1] > temp[0])
            {
                free += temp[1] - temp[0];
            }

            if (ALI[AL_pointer][1] > BOB[BOB_pointer][1])
                BOB_pointer++;
            else
                AL_pointer++;
        }

        cout << free;

        return 0;
    }