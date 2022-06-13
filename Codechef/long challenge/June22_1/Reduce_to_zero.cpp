#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
// #include <boost/multiprecision/cpp_int.hpp>
// using boost::multiprecision::cpp_int;

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
    int i, j, n, m;
    int a, b;
    cin >> a >> b;
    int steps = 0;
    if (a == b)
    {
        cout << a << endl;
    }
    else if (a == 0 || b == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        if (a > b)
        {
            // so b is max always
            swap(a, b);
        }
        while (a < b)
        {
            a = a * 2;
            steps++;
        }
        //just so that a is less than b 
        if (a >= b)
        {
            a=a/2;
            steps--;
        }
        int diff=b-a;
        //steps to make them closer such that when multiplied by 2 they become equal
        int initial_steps = a - (diff);
        a -= initial_steps;
        steps += initial_steps;
        a *= 2;
        steps++;
        steps += a;
        cout << steps << endl;
    }

    // wrong approach since we don't need to go till lcm we can reduce them to reach lower propertion and then equal;
    /*     cpp_int steps = 0;
        cpp_int lcm = 0;
        cpp_int a, b;
        cin >> a >> b;
        if(a==b)
        {
            cout<<a<<endl;
            return;
        }
        if (lcm)%(2*a)==1  ||lcm%(2*b) ==1 )
        {
            cout << -1 << endl;
            return;
        }
            // 256 64
        lcm = (a * b) / __gcd(a, b);
        cout << lcm << " l " << endl;
        steps += (lcm / a) / 2 + (lcm / b) / 2;
        steps += lcm;

        cout << steps << endl; */
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