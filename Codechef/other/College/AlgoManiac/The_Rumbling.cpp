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
#define REPR(i, k, n) for (int i = k; i >= n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int i, j, n, m;

        cin>>n;
        char pos[n];
	      int x,y;
	      int arreast[n]={0},arrwest[n]={0},sum_east[n],sum_west[n];
          rep(i,n)

	    {
	        cin>>pos[i];
	       
	    }
	    cin>>x>>y;
	    rep(j,n)
	   
	    {
	        if(pos[j]=='S')
	        {
	            arreast[j]=min(3*x,y);
	            arrwest[j]=min(x,3*y);
	            
	        }
	        else if(pos[j]=='N')
	        {
	            arreast[j]=min(x,3*y);
	            arrwest[j]=min(3*x,y);
	        
	            
	        }
	        else if(pos[j]=='W')
	        {
	            arreast[j]=min(2*x,2*y);
	            
	           
	        }
	        else if(pos[j]=='E')
	        {
	           arrwest[j]=min(2*x,2*y);
	           
	        }
	        
	    }  
	    sum_east[0]=arreast[0];
        REP(j,1,n)
	    
	    {
	        sum_east[j]=sum_east[j-1]+arreast[j];
	    }
	   sum_west[n-1]=arrwest[n-1];
       REPR(j,n-2,0)
	   
	    {
	        sum_west[j]=sum_west[j+1]+arrwest[j];
	    }
	   
	      int all_e=sum_east[n-1],all_w=sum_west[0],temp,mn;
        mn=min(all_e,all_w);

        REP(i,0,n-1)
	   
	    {
	        temp=sum_east[i]+sum_west[i+1];
	        mn=min(temp,mn);
	    }
        cout<<mn<<endl;
 
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

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}