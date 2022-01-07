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
int mx = 1000001;
vector<vector<int>>sf(mx);
vector<bool>prime(mx,false);
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
vector<bool>v;
void fun(){

    for(int i=2 ; i<mx ; i++){
        if(!(sf[i].size())){
            prime[i] = true;
            sf[i].push_back(i);
            for(int j=i+i ; j<mx ; j+=i){
                sf[j].push_back(i);
            }
        }
    }
}

void pgsolve()
{
      int t,i,j;
    cin>>t;
    fun();

    while(t--){
        int n,x;
        cin>>n;

        v.assign(mx,false);
        rep(i,n)

        {
            cin>>x;
            if(x==1)
            continue;
             rep(j,sf[x].size())
           
            v[sf[x][j]] = true;
        }
        

        for(i=2 ; i<mx ; i++){
            if(!v[i] && prime[i])
            break;
        }
        cout<<i<<endl;
    }
   

}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
	freopen("Error.txt", "w", stderr);
#endif

void fun();
  
        pgsolve();
    
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}