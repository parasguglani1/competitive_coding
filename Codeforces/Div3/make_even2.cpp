#include "bits/stdc++.h"
using namespace std;
#define ll               long long
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define vi       vector <int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define test int t; cin>>t; while(t--)
#define noob ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
#define mod 1000000007
#define inf 1e17
#define endl '\n'
ll max(ll i , ll j) {
 if (i > j)return i;
 else return j;
}
ll min(ll i , ll j) {
 if (i < j)return i;
 else return j;
}

void solve() {
    //write your code here
    int n;
    cin>>n;
    ll flag=0,flag1=-1;
    int k=n;
    string s=to_string(k);
    if((s[0]-'0')%2==0)
    flag=1;
    for(ll i=1;i<s.length();i++)
    {
        if((s[i]-'0')%2==0)
        flag1=2;
    }
    if(n%2==0)
    cout<<0;
    else if(flag==1)
    cout<<1;
    else
    {
        cout<<flag1;
    }
    cout<<"\n";
 }

signed main()
{
 noob
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif

 test{
  solve();
 }



}