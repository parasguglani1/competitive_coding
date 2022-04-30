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
// Alice (uniformly and independently) randomly picks two integers a,b from the range [1,104], and writes down the values of a+b, a−b, a⋅b and ⌊ab⌋ (integer division) in some random order. Unfortunately, she forgot the values of a and b. You need to help her to find out if there exists two integers a,b such that 1≤a,b≤104 and a+b, a−b, a⋅b, ⌊ab⌋ are the numbers she has written down.


    int arr[4];
    int absolutearr[4];
    int a,b;
    bool is_neg = false;
    bool is_zero = false;
    rep(i,4)
    {
        cin>>arr[i];
        absolutearr[i] = arr[i];

    }
    sort(arr,arr+4);
    // sort(absolutearr,absolutearr+4);
    sort(absolutearr, absolutearr+4, [](int i, int j) { return abs(i) < abs(j); });
    if (arr[0]<0){
        is_neg = true;

    }
    if (arr[3]-arr[2]==1)
    {
        if(is_neg)
        {
            a=arr[2];
            b=1;

        }
        else
        {
            a=1;
            b=arr[2];

        }

    }
    else
    {
        a=(absolutearr[2]+absolutearr[1])/2;
        b=(absolutearr[2])-a;


    }

if(is_neg){
    if(!(a*b==arr[3] && a+b == arr[2] && a-b == arr[0] && a/b == arr[1]))
    {
        cout<<"-1 -1"<<endl;
        
        return;
    }
   

}
else if (!(a*b==arr[3] && a+b == arr[2] && a-b == arr[1] && a/b == arr[0]))
    
     {
        cout<<"-1 -1"<<endl;
        return;
    }

    cout<<a<<" "<<b<<endl;


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