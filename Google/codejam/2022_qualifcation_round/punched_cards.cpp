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
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>



int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
    freopen("error.txt", "w", stderr);
#endif

 int i,j,r=3,c=2*2,test=1,testi=1;
    cin>>test;
    while(testi<=test){
         cin>>r>>c;
        cout<<"Case #"<<testi<<":\n";
        for(i=0;i<=r;i++){
            for(j=0;j<c;j++){
                if(i==0 && j==0 )
            		cout<<"..";
        		else
            		cout<<"+-";
            }cout<<"+\n";
            if(i!=r){
            	for(j=0;j<c;j++){
            		if(i==0 && j==0 )
            			cout<<"..";
            		else
                		cout<<"|.";
            }
			cout<<"|\n";
			}
        }
        testi++;
    }

  
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}