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
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>

int fun_arr[100009], arr2[100009], arr3[100009], arr4[100009];
vector<int> vec[100009];
queue<int> qu1;

void pgsolve()
{
    int n, points_to, count2, count1, ans = 0;
    cin >> n;
    REP(i, 0, n)

    {
        fun_arr[i] = arr2[i] = arr3[i] = arr4[i] = 0;
        vec[i].clear();
    }
    REP(i, 1, n)
        cin >> fun_arr[i];
    REP(i, 1, n)
    {
        cin >> points_to;
        arr2[i] = points_to;
        vec[points_to].push_back(i);
        arr4[points_to]++;
    }
    for (int i = 0; i <= n; i++)
        if (arr4[i] == 0)
            qu1.push(i);
    while (!qu1.empty())
    {
        points_to = qu1.front();
        qu1.pop();
        count2 = 1 << 30;
        for (int i = 0; i < vec[points_to].size(); i++)
        {
            if (arr3[vec[points_to][i]] < count2)
            {
                count2 = arr3[vec[points_to][i]];
                count1 = i;
            }
        }
        if (count2 == 1 << 30)
            count2 = 0;
        for (int i = 0; i < vec[points_to].size(); i++)
            if (i != count1)
                ans += arr3[vec[points_to][i]];
        arr3[points_to] = max(fun_arr[points_to], count2);
        arr4[arr2[points_to]]--;
        if (arr4[arr2[points_to]] == 0)
            qu1.push(arr2[points_to]);
    }
    cout << ans + arr3[0] << "\n";
    return;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
    freopen("error.txt", "w", stderr);
#endif

    int test;
    cin >> test;
    REP(i, 1, test)
    {
        cout << "Case #" << i << ": ";
        pgsolve();
    }

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}