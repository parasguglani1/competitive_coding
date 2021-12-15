#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define int long long
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
#define REPR(i, k, n) for (int i = k; i >= n; --i)
void paras()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void app( int *a, int init,int n, int *ans)
  {
       int b[100000]={0},pre=0;
       REP(i,init,n)
	        {
	            b[a[i]]++;
	            if(a[i]!=pre)
	            ans[i]=pre;
	            else
	            {
	                pre++;
	                while(b[pre]!=0)
	                {
	                    pre++;
	                }
	                ans[i]=pre;

	            }

	        }
  }

int32_t main()

{
    paras();
    w(t)
    {
            int N,K,Next_iteration;
            int ans_f=0;
	    cin>>N>>K;
	    int array[100000]={0};
	    rep(kl,N){
	        cin>>array[kl];}

	        int map=array[0];
	        REP(i,1,N)
	        {
	            if(array[i]>map)
	            map=array[i];
	        }
	        map= map+ 2;

	      vector<int>SubA[10000];
	      rep(ty,N)
	      {

	          SubA[array[ty]].push_back(ty);
	      }

              int value[10000]={0};
	         int final_ans[10000]={0};

	         app(array,0,N,value);
	          int max=value[N-1];

	         rep(i,N)
	             final_ans[value[i]]= final_ans[value[i]] + (i+1);



	        rep(i,map)
	        {

	            int num=SubA[i].size();
	            if(num==0)
	            break;
	            rep(j,num/2)
	            {
	                SubA[i][j]=SubA[i][j]+SubA[i][num-1-j];
	                SubA[i][num-1-j]=SubA[i][j]-SubA[i][num-1-j];
	                SubA[i][j]=SubA[i][j]-SubA[i][num-1-j];
	            }
	        }

	         

	       rep(i,N-1)
	       {
	           if(array[i]<=max)
	           {
	       //        cout<<"enter"<<endl;
	               SubA[array[i]].pop_back();
	               if(SubA[array[i]].size()==0) {

	               max=array[i];
	               Next_iteration=N;
	             //     cout<<max<<endl;
	               }
	               else
	                   Next_iteration=SubA[array[i]][SubA[array[i]].size()-1];
	                 int no=0,start=-1,add=0;
	             
                 rep(j,array[i])
	             {
	                 if(SubA[j].size()==0||SubA[j][SubA[j].size()-1]>Next_iteration) {
	                 no=1;
	                 break;
	                 }
	                 else
	                 {
	                     if(start<SubA[j][SubA[j].size()-1])
                         {
	                     start=SubA[j][SubA[j].size()-1];
	                  //   cout<<start<<" KK"<<endl;
	                     }
	                 }
	             }
	              if(no==0)
	              {
	                  if(start==-1) {
	                  add=0;
	                  start=i+1;
	                                }
	              else
	              add=array[i];

	            //  cout<<add<<" "<<start<<"ppe"<<endl;
	                 
                      REP(j,start,Next_iteration)
	                  {
	                   

                          final_ans[value[j]]= final_ans[value[j]] - (j-i);

	                      value[j]=add;
	                      

                            final_ans[value[j]]= final_ans[value[j]] + (j-i);
	                     // cout<<ans[val[j]]<<"op"<<endl;
	                  }


	              }
	           }


	       }

	        
	        rep(i,map)
	        {
	            if(K<=final_ans[i])
	            {
	                ans_f=i;
	                break;
	            }
	            else
	            K= K-final_ans[i];
	        }


	        cout<<ans_f<<endl;


    }
    return 0;
}