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
int caseno=1;

string MinValue(string N, int X)
{
	// Variable to store length
	// of string N
	int len = N.size();
	// Variable to denote the position
	// where X must be added
	int position = len + 1;
		// For positive numbers, X must be
		// placed at the last index where
		// it is smaller than N[i]
		for (int i = len - 1; i >= 0; i--) {
			if ((N[i] - '0') > X) {
				position = i;
			}
		}
	
	// Insert X at that position
	N.insert(N.begin() + position, X + '0');

	// Return the string
	return N;
}

int getSum(string str)
{
    int sum = 0;
  
    // Traversing through the string
    for (int i = 0; i < str.length(); i++) {
        // Since ascii value of
        // numbers starts from 48
        // so we subtract it from sum
        sum = sum + str[i] - 48;
        // cout<<str[i]<<" "<<sum<<endl;
    }
    return sum;
}

void pgsolve()
{
    string n;
    cin >> n;
    string ans;;
    int s= getSum(n);

cout<<s<<endl;
int to_add=9-(s%9);
cout<<to_add<<endl;

 ans=MinValue(n,to_add);
cout<<ans<<endl;
  cout<<"Case #"<<caseno<<": "<<ans<<endl;
    caseno++;



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