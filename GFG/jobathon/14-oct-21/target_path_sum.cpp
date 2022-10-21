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
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int K, A, B;
    cin >> K >> A >> B;
    bool lessk = false;
    int morekcount = 0;
    K-=arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] <= K)
        {
            lessk = true;
        }
        else if (i == 0)
        {
        }
        else
        {
            morekcount++;
        }
    }
    int ans = 0;
    if (A <= B && lessk)
    {

        ans = morekcount * A;
    }
    else if (A <= B)
    {
        ans = B + --morekcount * A;
    }
    else
    {
        ans = B * morekcount;
    }
    cout<<ans<<endl;
    // return ans;
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

    // w(t)
    // {
        pgsolve();
    // }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}

/*

class Solution {
public:
    long long solve(int n, vector<int> &Par, vector<int> &arr, int k, int a, int b) {
        // code here
        long long mnless = 1e18;
        for (int i = 0; i < n; i++)mnless = min(mnless, (long long) arr[i]);
        long long ans = 1e18;
        long long curans = 0;
        //when root value is not changed
        curans = 0;
        if (arr[0] > k)curans = 1e18;
        for (int i = 1; i < n; i++)
        {
            if (curans >= ans)break;
            if (arr[i] + arr[0] > k)
            {
                int temp = 1e9;
                if (mnless + arr[0] <= k)temp = min(temp, a);
                curans += temp;
            }
        }
        ans = min(ans, curans);
        curans = 0;
        if (arr[0] > k)curans = 1e18;
        bool flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (curans >= ans)break;
            if (arr[i] + arr[0] > k)
            {
                int temp = 1e9;
                if ( arr[0] <= k) {
                    if (!flag)temp = min(temp, b);
                    else temp = min({temp, a, b});
                    flag = 1;
                }
                curans += temp;
            }
        }
        ans = min(ans, curans);
        //when root value is changes to anyother value
        curans = a;
        arr[0] = mnless;
        if (arr[0] > k)curans = 1e18;
        for (int i = 1; i < n; i++)
        {
            if (curans >= ans)break;
            if (arr[i] + arr[0] > k)
            {
                int temp = 1e9;
                if (mnless + arr[0] <= k)temp = min(temp, a);
                curans += temp;
            }
        }
        ans = min(ans, curans);
        //when root value is changed to any non negative integer
        arr[0] = 0;
        curans = b;
        b = min(a, b);
        if (arr[0] > k)curans = 1e18;
        for (int i = 1; i < n; i++)
        {
            if (curans >= ans)break;
            if (arr[i] + arr[0] > k)
            {

                curans += b;
            }
        }
        ans = min(ans, curans);
        return ans;
    }
};
 */
