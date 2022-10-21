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

bool checkk(deque<int> dq, int k)
{
    int n = dq.size();
    // cout << "n is " << n << endl;
    int j = n - 1;
    int i = 1;
    int cnt = 0;

    while (true)
    {
        int ele = k - i + 1;
        int j = 0;
        int ind = 0;
        cout<<"is empty "<<dq.empty()<<endl;
        if (dq.size() == 0 && cnt <= k)
            return false;
        if (dq.size() == 0 && cnt > k)
            return true;
        for (int m = 0; m < n; m++)
        {
            if (dq[m] <= ele)
            {
                ind = m;
            }
        }

        if (ind >= 0 && dq[ind] <= ele)
        {
            dq.erase(dq.begin() + ind-1);
            dq.pop_front();
            cnt++;
            i++;
            // cout<<dq.size()<<endl;

            cout<<"cnt is "<<cnt<<endl;
              cout << endl;

            for (auto x = dq.begin(); x <= dq.end(); ++x)
                cout << " " << *x;

            //   for (int i = 0; i < dq.size(); i++)
            //   {
            //       cout << dq[i] << " ";
            //   }
              cout << endl;

        }
        else
        {
            break;
        }

        // while (dq[j] <= ele)
        // {
        //     j++;
        //     break;
        // }
        // j--;
        // cout << ind << endl;
        // cout << dq[ind] << endl;
    }

    // while (dq[j] > n)
    // {
    //     dq.pop_back();
    //     j--;
    // }
    // int n = dq.size();
    /*  for (int i = 0; i < n; i++)
     {
         cout << dq[i] << " ";
     }
     return true; */
    if (cnt >= k)
    {
        return true;
    }
    return false;
}
void pgsolve()
{
    int n;
    cin >> n;

    deque<int> a;
    bool one = false;
    if (n == 1)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        if (x == 1)
        {
            one = true;
        }
    }
    sort(a.begin(), a.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    if (!one)
    {
        cout << 0 << endl;
        return;
    }
    // cout << endl;
    int k = 1;
    int mx = 0;
    cout << checkk(a, 4) << endl;

    // while (checkk(a, k))
    // {
    //     mx = max(mx, k);
    //     k++;
    // }
    // cout << mx << endl;
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
