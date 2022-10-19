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
    int n;
    cin >> n;
    string str;
    cin >> str;
    string temp = "";
    bool oneexist = false;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1' || oneexist)
        {
            oneexist = true;
            temp += str[i];
        }
    }
    if (temp == "")
    {
        cout << 0 << endl;
        return;
    }
    str = temp;
    int start = 1;
    n = str.length();
    temp = "";

    int temp1, temp2;
    int num1, num2;
    for (int i = 2; i <= n ; i++)
    {
        num1 = n - start + 1;
        num2 = n - i + 1;
        int mn = min(num1, num2);
        for (int j = mn; j <= n; j++)
        {
            if (str[j - 1] == '0')
            {
                if (j >= num1)
                {
                    temp1 = str[j - num1] == '1';
                }
                else
                {
                    temp1 = 0;
                }
                if (j >= num2)
                {
                    temp2 = str[j - num2] == '1';
                }
                else
                {
                    temp2 = 0;
                }
                if (temp1 < temp2)
                {
                    start = i;
                }
                if (temp1 != temp2)
                {
                    break;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int num1 = i >= n - start + 1 && str[i - n + start - 1] == '1';
        int num2 = (str[i - 1]) - 48;
        int ans = num2 | num1;
        temp = temp + to_string(ans);
    }
    cout << temp << endl;
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

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
