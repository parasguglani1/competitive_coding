#include <bits/stdc++.h>
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
using namespace __gnu_pbds;
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define double long double
#define mod 1000000007
// #define mod 998244353
#define pi 3.14159265358979323846
#define int long long

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x) ;
#endif

void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
// void _print(char t) {cerr << t;}
// void _print(double t) {cerr << t;}

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.first);
    cerr << ",";
    _print(p.second);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// 1) Sliding Window
// 2) Islands (Matrix Traversal)
// 3) Two Pointers
// 4) Fast & Slow Pointers
// 5) Merge Intervals
// 6) Cyclic Sort
// 7) In-place Reversal of a LinkedList
// 8) Tree Breadth-First Search
// 9) Tree Depth First Search
// 10) Two Heaps
// 11) Subsets
// 12) Modified Binary Search
// 13) Bitwise XOR
// 14) Top ‘K’ Elements
// 15) K-way Merge
// 16) Topological Sort
// 17) 0/1 Knapsack
// 18) Fibonacci Numbers
// 19) Palindromic Subsequence
// 20) Longest Common Substring

// write simple code, recheck for typographical error
// binary search
// greedy
// dp
// try above three if minimum or maximum is asked
// sorting
// pattern
// odd even
// stack
// re-aarange the equation
// dp on trees
// rotate function
// swap
// swap range void swap(first1, last1, first2)
// reverse
// save a copy of reversed void reverse_copy(first, last, result);
// merge
// bool is_sorted(iterator first, iterator last);
// bool next_permutation(iterator first, iterator last);
// bool prev_permutation(iterator first, iterator last);
// gcd
// lcm
// prime
// lis,lcs,knapsack,max submatrix(n^3),coin change
// INT_MIN INT_MAX LONG_MIN LONG_MAX LLONG_MIN LLONG_MAX
// multisource bfs
// bfs
// answer could be discreet
// O(nsqrt(n))
//  we could iterate over a part of the array O(k^2)
//  (a^b)^(b^c)^(c^d)^(d^e)=a^e
//  long long can cause tle
//  game theory:brute force first 30 expamples
//  brute force may not give tle
//  seive of eratothenes concept, update future values from present values, G short tasks
// associate a range with floor function
// tranform the array, then proceed
// probabilities can play roles in interactive questions
// remove from left or right - dp
// x/y => y=x,y=2x,y=3x,y=4x
// if a binary string is given, think in terms of consecutive blocks of one or zeros
// vlad and unfinished business count each edge twice
// dp can be used for precomputation
// when constraints of v[i] is small, one could iterate over its frequency array
// factorials can summed up and merged into adjacent greater factorial
// never perform operation during cout, dont cout<<x*y
// try if creating a difference array will of any use(sorted or unsorted)
// try if suffix or prefix of the array is of any use
//(a%mod-b%mod+mod)%mod
// setprecision also rouns off
// apply the operation on complete array
// tranform the array by adding or subtracting its index from the element
// update the vis array after pushing in the queue in bfs
// make v[i] an index of the segment tree to calculate sum of all elements greater or less than v[i] in 0(1)
// knapsack/targetsum variation select or reject subarrays instead of elements, take dp[i][sum][f], f is if ith element was selected or not, it used to decide whether subarray is to be extended or not
// when queries are to be answered in O(1), answer may be discreet
// prefix xor works well to calculate xor of subarrays xor = pre[r]^pre[l-1]
// in binary string where when you are asked to flip characters, counting total number of flips in advance can help decide the final state
// inclusion exclusion principle on factors
// query question with add, remove may be done with tree structure
// meet in the middle technique, when constraints are not small enough, divide and conquer
// when operartions modify the array value, modified values may not be very large and countable
// with mex question, range 0 to N is important,
// in first questions simple xor or and may give the answer
// co-ordinates can be tranformed by multiplication with -1, exchange +ve -ve
// segment tree of prefix sums then use binary search since prefix sum array is sorted
// a+b=(a or b)+(a and b)
// question with subarrays and n2 constraints consider all subarrays!!
// string pattern question, you may not use all letters
// ternary bitmask
// max subarray length, think of dp,sliding window,binary search
// all trees are biparite, 2-coloring them might be usefull
// playoff tournament
// shortest path k steps , dp with k layers
// when first and last element is important, think of dp
// if it is asked to create new numbers given existing number like x-y or 2x-y, think of difference array or gcd
// if there are many cases being formed, some may not be optimal or some may be redundant
// pigionhole principle, bruteforce may work
// addition to number results in shifting in bits in binary forms
// rearrangement of multiple summations
// if assignment in one direction is troublesome, try from the other direction
// when constraints indicate 2d dp, it may be 1d dp like lis
// in xor questions, think of subarrays with xor = zero
// number of maximun disjoint subaray with xor or sum zero in an array,greedy
// 1 3 3 1, 1 4 6 4 1, ncr if such patterns are seen
// question bits and graphs, create graphs for each bit
// if you are asked to build trees, find possible roots
// when you are asked to select elements from an array in o(n), think of subarrays, or swapping your selection so that it becomes a subarray
// when you asked to simulate a process from the beginning, try to simulate it from the end
// run brute force and debug to see patterns
// some opeartions on arrays may not change the sum ai * i of all elements, for eg, 1111 --> 2002
// think of some other operation which when applied result in some other constant value
// bipartite graphs, odd length cycles
// recheck initializations for edge cases
// ranges can be stored in vector of vector of pairs where l can act as index and r and pos can form the pairs
// sets can useful in greedy assignment
// when you are asked to find a number, think of possible lower and upper bound of the variable, try to find the optimal range
// 840 C. Another Array Problem
// solution may not be as complicated as it may seem
// when asked to count binary strings, think of dp, one possible way dp[i][j], number of strings till i such that digit opposite from one at i is at j
// if operations require some sort of difference, think of creating a zero
// run a loop, fill and use the set every time,
// when asked to find ans to some sliding range, think of two set left and right and move forward
// log2(26) = 5, maybe helpful in binary search problems
// offline queries
// questions related to manhattan distances, think of traversing diagonally, its a rhombus that is equidistant from some point
// questions with absolute eqautions, try to break into cases
// when dealing with factors consider the case where i and n/i are equal
// while using expo check if mod is required or not
// initialize seg tree vector 10 times the size of given vector
// going up a binary tree, just divide by 2
// 1796D - dp states, transition conditions, base case
// ans+=x is better than ans = ans+x
// shocking arrangement greedy increase increase and then reduce just enough so you can again increase

int expo(int m, int n)
{
    if (n <= 0)
        return 1;
    if (n == 1)
        return m;
    int x = expo(m, n / 2) % mod;
    if (n % 2 == 0)
    {
        return (x % mod * x % mod) % mod;
    }
    else
    {
        return (x % mod * x % mod * m % mod) % mod;
    }
}

int expowm(int m, int n)
{
    if (n <= 0)
        return 1;
    if (n == 1)
        return m;
    int x = expowm(m, n / 2);
    if (n % 2 == 0)
    {
        return (x * x);
    }
    else
    {
        return (x * x * m);
    }
}

// int targetsum(int i,int sum, vector<int>&v, vector<vector<int>>&dp){
//     if(sum==0)return 1;
//     if(sum<0)return 0;
//     if(i==v.size())return 0;
//     if(dp[i][sum]!=-1)return dp[i][sum];
//     int a = check(i+1,sum-v[i],v,dp);
//     int b = check(i+1,sum,v,dp);
//     return dp[i][sum]=(a|b);

// }

// int targetsum(int i,int sum, vector<int>&v, vector<vector<int>>&dp){
//     if(sum==v[i])return 1;
//     if(i==v.size())return 0;
//     if(dp[i][sum]!=-1)return dp[i][sum];
//     int a = targetsum(i+1,sum^v[i],v,dp);
//     int b = targetsum(i+1,sum,v,dp);
//     return dp[i][sum]=(a|b);

// }

// int removalGame(int i,int j, vector<int>&v,vector<vector<int>>&dp){
//     if(i>j){
//         return 0;
//     }
//     if(dp[i][j]!=-1)return dp[i][j];
//     int ans = max({v[i]+min(help(i+2,j,v,dp),help(i+1,j-1,v,dp)),v[j]+min(help(i,j-2,v,dp),help(i+1,j-1,v,dp))});
//     return dp[i][j]=ans;

// }

vector<int> seg;
vector<int> lazy;
void build(int ind, int low, int high, vector<int> &t)
{
    // cout<<ind<<" "<<low<<" "<<high<<endl;
    if (high == low)
    {
        // cout<<t[high]<<" ";
        seg[ind] = t[high];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * ind + 1, low, mid, t);
    build(2 * ind + 2, mid + 1, high, t);
    seg[ind] = __gcd(seg[2 * ind + 1], seg[2 * ind + 2]);
}
int query(int ind, int low, int high, int l, int r)
{
    if (low >= l and high <= r)
    {
        return seg[ind];
    }
    if (high < l or low > r)
    {
        return 0;
    }
    int mid = (low + high) / 2;
    int left = query(2 * ind + 1, low, mid, l, r);
    int right = query(2 * ind + 2, mid + 1, high, l, r);
    return __gcd(left, right);
}
// void pointupdate(int ind, int low, int high, int node, int val){
//     if(low==high){
//         seg[ind]=val;
//     }else{
//         int mid = (high+low)/2;
//         if(node<=mid and node>=low){
//             pointupdate(2*ind+1,low,mid,node,val);
//         }else{
//             pointupdate(2*ind+2,mid+1,high,node,val);
//         }
//         seg[ind] = seg[2*ind+1]+seg[2*ind+2];
//     }
// }

void rangeupdate(int ind, int low, int high, int l, int r, int val)
{

    if (lazy[ind] != 0)
    {
        seg[ind] += (high - low + 1) * lazy[ind];
        if (low != high)
        {
            lazy[2 * ind + 1] += lazy[ind];
            lazy[2 * ind + 2] += lazy[ind];
        }
        lazy[ind] = 0;
    }

    if (l <= low and r >= high)
    {
        seg[ind] += (high - low + 1) * val;
        if (low != high)
        {
            lazy[2 * ind + 1] += val;
            lazy[2 * ind + 2] += val;
        }
        return;
    }

    if (high < l or low > r)
    {
        return;
    }

    int mid = (high + low) / 2;
    rangeupdate(2 * ind + 1, low, mid, l, r, val);
    rangeupdate(2 * ind + 2, mid + 1, high, l, r, val);
    seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
}

int rangeLazyQuery(int ind, int low, int high, int l, int r)
{

    if (lazy[ind] != 0)
    {
        seg[ind] += (high - low + 1) * lazy[ind];
        if (low != high)
        {
            lazy[2 * ind + 1] += lazy[ind];
            lazy[2 * ind + 2] += lazy[ind];
        }
        lazy[ind] = 0;
    }

    if (l <= low and r >= high)
    {
        return seg[ind];
    }

    if (high < l or low > r)
    {
        return 0;
        ;
    }

    int mid = (high + low) / 2;
    int sum = 0;
    sum += rangeLazyQuery(2 * ind + 1, low, mid, l, r);
    sum += rangeLazyQuery(2 * ind + 2, mid + 1, high, l, r);
    return sum;
}

// void ts(int v, vector<vector<int>>&g,vector<int>&vis,vector<int>&lvis,vector<int>&tsv,int &f)
// {
//     if(lvis[v]==1){
//         f=1;
//         return;
//     }

//     lvis[v]=1;
//     for(int i:g[v])
//         if (!vis[i])
//             ts(i,g,vis,lvis, tsv,f);

//     tsv.push_back(v);
//     vis[v] = 1;
//     lvis[v]=0;

// }

//     vector<int>vis(n+1,0);
//     vector<int>lvis(n+1,0);
//     vector<int>tsv;
//     int f=0;
//     for(int i=1;i<=n;i++){
//         if(vis[i]==0){
//             ts(i,g,vis,lvis,tsv,f);
//         }
//     }
//     if(f==1){
//         cout<<-1<<endl;
//         return;
//     }

// int find(int x, vector<int>&p){
//     if(p[x]==x)return x;
//     else return p[x] = find(p[x],p);
// }
// void Union(int x, int y, vector<int>&p){
//     x = find(x,p);
//     y = find(y,p);
//     if(x!=y)
//     p[x]=y;
// }

// int mst(vector<vector<pair<int,int>>>&g){
//     int n=g.size();
//     vector<pair<int,pair<int,int>>>ed;
//     for(int i=1;i<n;i++){
//         for(auto &x:g[i]){
//             ed.push_back({x.second,{i,x.first}});
//         }
//     }
//     sort(ed.begin(),ed.end());
//     reverse(ed.begin(),ed.end());

//     vector<int>p(n);
//     for(int i=0;i<n;i++){
//         p[i]=i;
//     }
//     debug(ed)
//     int ans=0;
//     for(int i=0;i<ed.size();i++){
//         int wt = ed[i].first;
//         int a = ed[i].second.first;
//         int b = ed[i].second.second;

//         a = find(a,p);
//         b = find(b,p);

//         if(a!=b){
//             Union(a,b,p);
//             ans+=wt;
//         }
//     }
//     return ans;
// }

//  vector<int>pn={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73,
// 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179,
// 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283,
// 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419,
// 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547,
// 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661,
// 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811,
// 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947,
// 953, 967, 971, 977, 983, 991, 997};

vector<int> pf(int n)
{
    // Print the number of 2s that divide n
    vector<int> ans;
    while (n % 2 == 0)
    {
        ans.push_back(2);
        n = n / 2;
    }
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        int c = 0;
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            n = n / i;
            ans.push_back(i);
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
    {
        ans.push_back(n);
    }
    return ans;
}

// int mex(vector<int> &arr)
// {
//     int N = arr.size();
//   // sort the array
//   sort(arr.begin(), arr.end());

//   int mex = 0;
//   for (int idx = 0; idx < N; idx++)
//   {
//     if (arr[idx] == mex)
//     {
//       // Increment mex
//       mex += 1;
//     }
//   }

//   // Return mex as answer
//   return mex;
// }

// vector<int>fac(10000000);
// void fact(){
//     fac[0]=1;
//     fac[1]=1;
//     for(int i=2;i<10000000;i++){
//         fac[i]=(fac[i-1]%mod*i%mod)%mod;
//     }
// }

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// int modin(int A)
// {
//     int g = gcd(A, mod);
//     if (g != 1)
//         cout << "Inverse doesn't exist";
//     else {
//         // If a and m are relatively prime, then modulo
//         // inverse is a^(m-2) mode m

//           int ans = expo(A, mod - 2);
//           return ans;
//     }
//     return 0;
// }

// int ncr(int n,int r){
//     if (n < r)
//         return 0;
//     // Base case
//     if (r == 0)
//         return 1;

//     int ans1 = (fac[n]%mod * modin(fac[r])%mod)%mod;
//     int ans = (ans1* (modin(fac[n - r])%mod))%mod;

//     return ans;
// }

// #define MAXN 10000005
// int spf[MAXN];

// void sieve()
// {
//     spf[1] = 1;
//     for (int i=2; i<MAXN; i++)

//         // marking smallest prime factor for every
//         // number to be itself.
//         spf[i] = i;

//     // separately marking spf for every even
//     // number as 2
//     for (int i=4; i<MAXN; i+=2)
//         spf[i] = 2;

//     for (int i=3; i*i<MAXN; i++)
//     {
//         // checking if i is prime
//         if (spf[i] == i)
//         {
//             // marking SPF for all numbers divisible by i
//             for (int j=i*i; j<MAXN; j+=i)

//                 // marking spf[j] if it is not
//                 // previously marked
//                 if (spf[j]==j)
//                     spf[j] = i;
//         }
//     }
//}

// vector<int> gF(int x)
// {
//     vector<int> ret;
//     while (x != 1)
//     {
//         ret.push_back(spf[x]);
//         x = x / spf[x];
//     }
//     return ret;
// }

// int isBipar(int x, vector<vector<int>>&g,vector<int>&color,int &one, int &zero,int &ed){
//     if(color[x]==0)zero++;
//     else one++;
//     for(int c:g[x]){
//         ed++;
//         if(color[c]==-1){
//             color[c]=1-color[x];
//             int r = isBipar(c,g,color,one,zero,ed);
//             if(r==0)return 0;
//         }

//         if(color[c]==color[x]){
//             return 0;
//         }
//     }

//     return 1;
// }

// vector<int>color(n+1,-1);
//     for(int i=1;i<=n;i++){
//         int one=0;
//         int zero=0;
//         int r=0;
//         int ed=0;
//         if(color[i]==-1){
//             color[i]=0;
//             r = isBipar(i,g,color,one,zero,ed);
//             if(r==0){
//                 cout<<0<<endl;
//                 return;
//             }else{
//                 cs.push_back({{one,zero},ed});
//             }
//         }
//     }

int add(int x, int y)
{
    x += y;
    while (x >= mod)
        x -= mod;
    while (x < 0)
        x += mod;
    return x;
}

int mul(int x, int y)
{
    return (x * y) % mod;
}

int lcm(int x, int y)
{
    int ans = x * y;
    int g = gcd(x, y);
    ans = ans / g;
    return ans;
}

// vector<vector<int>>stable(10000,vector<int>(30));
// void buildtable(vector<int>&v){
//     int n=v.size();
//     for(int l=0;l<30;l++){
//         for(int i=0;i<n;i++){
//             {
//                 int len = pow(2,l);

//                 if(i+len>=n){
//                     break;
//                 }

//                 if(len==1){
//                     stable[i][l]=v[i];
//                 }else{
//                     stable[i][l]=stable[i][l-1]+stable[i+len][l-1];
//                 }
//         }
//     }

// }
// }

// int count_distinct(int x,int y,string &s){
//     set<int>st;
//     for(int i=x;i<=y;i++)st.insert(s[i]);
//     int ans = st.size();
//     return ans;
// }

// int bitwisedivision(int bit, vector<int>&v){

//     if(v.size()==1)return 0;
//     if(bit==-1)return 0;

//     vector<int>l,r;
//     for(int i=0;i<v.size();i++){
//         int x = (v[i]>>bit)&1;
//         if(x==1){
//             l.push_back(v[i]);
//         }else{
//             r.push_back(v[i]);
//         }
//     }

//     if(l.size()==0)return help(bit-1,r);
//     if(r.size()==0)return help(bit-1,l);

//     return min(help(bit-1,l),help(bit-1,r))+pow(2,bit);
// }

// {
//     vector<int>p,s;
//     vector<int>p2,s2;

//     p.clear(),s.clear();
//     p2.clear(),s2.clear();
//     p.resize(n+1,-1e18),s.resize(n+1,-1e18);
//     p2.resize(n+1,1e18),s2.resize(n+1,1e18);

//     for(int i=1;i<=n;i++){
//         p[i]=max(p[i-1],v[i]);
//         p2[i]=min(p2[i-1],v[i]);
//     }
//     s[n]=v[n];
//     s2[n]=v[n];
//     for(int i=n-1;i>=1;i--){
//         s[i]=max(s[i+1],v[i]);
//         s2[i]=min(s2[i+1],v[i]);
//     }

// }

// void lpindag(int x,vector<vector<int>>&g,vector<int>&vis,vector<int>&dp)
// {

//     if(dp[x]!=-1)return;
//     vis[x]=1;
//     dp[x]=0;
//     for(int c:g[x]){
//         if(vis[c]==0){
//             ts(c,g,vis,dp);
//         }
//         dp[x]=max(dp[x],dp[c]+1);
//     }
// }

int numdigit(int l)
{
    int d1 = 0;
    int t = l;
    while (t != 0)
    {
        t = t / 10;
        d1++;
    }
    return d1;
}

// int lcs(string text1, string text2) {
//         int n = text1.size();
//         int m = text2.size();
//         vector<vector<int>>dp(n+1,vector<int>(m+1));
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=m;j++){
//                 if(i==0 or j==0)dp[i][j]=0;
//             }
//         }
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 if(text1[i-1]==text2[j-1]){
//                     dp[i][j]=dp[i-1][j-1]+1;
//                 }else{
//                     dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//                 }
//             }
//         }
//         return dp[n][m];
//     }

vector<int> pns;
void sieve(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            pns.push_back(p);
}

// vector<int> manacher(string s) {

//     string t;
//     for(auto c: s) {
//         t += string("#") + c;
//     }
//     t=t+"#";
//     s=t;
//     //debug(t)
//     int n = s.size();
//     s = "$" + s + "^";
//     //debug(s)
//     debug(s)
//     vector<int> p(n + 2);
//     int l = 1, r = 1;
//     for(int i = 1; i <= n; i++) {
//         int x = min(r - i, p[l + (r - i)]);
//         p[i] = max(0ll, x);
//         while(s[i - p[i]] == s[i + p[i]]) {
//             p[i]++;
//         }
//         if(i + p[i] > r) {
//             l = i - p[i], r = i + p[i];
//         }
//     }
//     return vector<int>(begin(p) + 1, end(p) - 1);
// }

// int jumpgame(vector<int>&v){
//     int n=v.size();

//     int l=0;
//     int r=0;
//     while(l<=r and r<n){
//         int f = 0;
//         for(int i=l;i<=r;i++){
//             f=max(f,v[i]+i);
//         }
//         if(f>=n-1){
//             return 1;
//         }
//         if(f<=r){
//             return 0;
//         }

//         l=r+1;
//         r=f;
//     }
//     return 0;

// }

// int lis(vector<int>&v){
//     int n=v.size();
//     debug(v)
//     vector<int>lisv;
//     if(n==0)return 0;
//     lisv.push_back(v[0]);
//     int len = 1 ;
//     for(int i=1;i<n;i++){

//     int pos = lower_bound(lisv.begin(),lisv.end(),v[i]) - lisv.begin();
//     if(pos==len){
//         lisv.push_back(v[i]);
//         len++;
//     }else{
//         lisv[pos] = v[i];
//     }

//     }
//     return len;

// }

// static bool comp(pair<int,int>&x, pair<int,int>&y){
//     if(x.first==y.first){
//         return x.second>y.second;
//     }
//     return x.first<y.first;
// }

// int targetsum(int i,int sum, vector<int>&v, vector<vector<int>>&dp){
//     if(sum==v[i])return 1;
//     if(sum<0)return 0;
//     if(i==-1)return 0;
//     if(dp[i][sum]!=-1)return dp[i][sum];
//     int a = targetsum(i-1,sum-v[i],v,dp);
//     int b = targetsum(i-1,sum,v,dp);
//     return dp[i][sum]=(a|b);

// }

// vector<vector<int>>trieds(500005,vector<int>(11,0));
// vector<vector<int>>cnt(500005,vector<int>(11,0));
// vector<int>stop(500005,0);
// trieds.clear();
// trieds.resize(n*m+5,vector<int>(m+5,0));
// int ct = 0;

// void insert(vector<int>&s) {
//     int node = 0;
//     for (int i = 1; i < s.size(); i++) {
//         int val = s[i];
//         if (!trieds[node][val]){
//             trieds[node][val] = ++ct;
//         }
//         cnt[node][val]++;
//         node = trieds[node][val];
//     }
//     stop[node]++;
// }

// int search(vector<int>&s) {
//     int node = 0, ans = 0;
//     for (int i = 1; i < s.size(); i++) {
//         int val = s[i];
//         if (trieds[node][val]) {
//             ans++;
//            node = trieds[node][val];
//         }else{
//             break;
//         }
//     }
//     return ans;
// }

// map<pair<int,int>,int>mp;

// void del(string &s){
//     int node = 0;
//     //debug(s)
//     for(int i=0;i<s.size();i++){
//         int val = s[i]-'a';
//         if(cnt[node][val]==1){
//             int tnode = trieds[node][val];
//             mp[{node,val}]=trieds[node][val];
//             trieds[node][val]=0;
//             cnt[node][val]=0;
//             node = tnode;
//         }else{
//             cnt[node][val]--;
//             mp[{node,val}]=-1;
//             node = trieds[node][val];
//         }

//     }
//     stop[node]--;
// }

// void addagain(){
//     for(auto &x:mp){
//             int a = x.first.first;
//             int b = x.first.second;
//             if(x.second==-1){
//                 cnt[a][b]++;
//             }else{
//                 cnt[a][b]++;
//                 trieds[a][b]=x.second;
//             }
//         }
//         mp.clear();
// }

// void dfs(int x,vector<vector<int>>&g,vector<int>&vis,int &v,int &e){
//     vis[x]=1;
//     v++;
//     for(int c:g[x]){
//         e++;
//         if(vis[c]==0){
//             dfs(c,g,vis,v,e);
//         }
//     }

// }

vector<vector<int>> mat_mul(vector<vector<int>> a, vector<vector<int>> b, int m)
{
    int n = a.size();
    vector<vector<int>> res(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
                res[i][j] %= m;
            }
        }
    }
    return res;
}

vector<vector<int>> mat_expo(vector<vector<int>> a, int b, int m)
{
    if (b == 0)
    {
        int n = a.size();
        vector<vector<int>> idm(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    idm[i][j] = 1;
            }
        }
        return idm;
    }
    vector<vector<int>> ans;
    if (b % 2 == 0)
    {
        ans = mat_expo(a, b / 2, m);
        ans = mat_mul(ans, ans, m);
    }
    else
    {
        ans = mat_expo(a, b / 2, m);
        ans = mat_mul(ans, ans, m);
        ans = mat_mul(ans, a, m);
    }

    return ans;
}

vector<int> dx = {1, -1, 0, 0};
vector<int> dy = {0, 0, 1, -1};

int inR(int x, int y, int n, int m)
{
    if (x >= 0 and x < n and y >= 0 and y < m)
    {
        return 1;
    }
    return 0;
}

// void dfs(int i,int j,vector<vector<int>>&v,vector<vector<int>>&vis){
//     vis[i][j]=1;
//     int n = v.size();
//     int m=v[0].size();
//     for(int d=0;d<4;d++){
//         int x=i+dx[d];
//         int y=j+dy[d];
//         if(inR(x,y,n,m) and vis[x][y]==0 and v[x][y]==0){
//             dfs(x,y,v,vis);
//         }
//     }
// }

int dfs(int x, vector<vector<int>> &g, vector<int> &vis, vector<int> &p)
{
    vis[x] = 1;
    debug(x) for (int c : g[x])
    {
        debug(c) if (c == 1 and p[c] != 1)
        {
            return x;
        }
        if (vis[c] == 0)
        {
            p[c] = x;
            int x = dfs(c, g, vis, p);
            if (x != 0)
                return x;
        }
    }

    return 0;
}

pair<int, int> isP(string &s, int mid, int in, int de)
{
    vector<pair<int, int>> vp;
    for (int i = 0; i <= mid; i++)
    {
        vp.push_back({s[i] - 'a', 26 - s[i] + 'a'});
    }
    sort(vp.begin(), vp.end());
    debug(vp) int p = vp.size();
    for (int i = 0; i < vp.size(); i++)
    {
        if (de - vp[i].first >= 0)
        {
            de -= vp[i].first;
        }
        else
        {
            p = i;
            break;
        }
    }
    int sum = 0;
    for (int i = p; i < vp.size(); i++)
    {
        sum += vp[i].second;
    }
    if (sum <= in)
    {
        return {in - sum, de};
    }

    vp.clear();
    for (int i = 0; i <= mid; i++)
    {
        vp.push_back({26 - s[i] + 'a', s[i] - 'a'});
    }
    sort(vp.begin(), vp.end());
    p = vp.size();
    for (int i = 0; i < vp.size(); i++)
    {
        if (in - vp[i].first >= 0)
        {
            in -= vp[i].first;
        }
        else
        {
            p = i;
            break;
        }
    }
    sum = 0;
    for (int i = p; i < vp.size(); i++)
    {
        sum += vp[i].second;
    }
    if (sum <= de)
    {
        return {in, de - sum};
    }

    return {-1, -1};
}

void solve()
{

    int n;
    cin >> n;
    int in, de;
    cin >> in >> de;

    string s;
    cin >> s;

    int l = 0;
    int h = n - 1;
    int ans = -1;
    pair<int, int> ap = {in, de};
    while (l <= h)
    {
        int mid = (l + h) / 2;
        debug(l)
            debug(h)
                debug(mid)
                    pair<int, int>
                        x = isP(s, mid, in, de);
        debug(x) if (x.first == -1)
        {
            h = mid - 1;
        }
        else
        {
            ans = mid;
            ap = x;
            l = mid + 1;
        }
    }

    debug(ans)

        for (int i = 0; i <= ans; i++)
    {
        s[i] = 'a';
    }
    in = ap.first;
    de = ap.second;
    debug(ap)
        s[ans + 1] -= de;
    for (int i = ans + 2; i < n; i++)
    {
        int c = s[i] - 'a';
        int nin = 26 - c;
        if (nin <= in)
        {
            s[i] = 'a';
            in -= nin;
        }
    }
    cout << s << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    // fact();
    // sieve(1000005);
    // fact();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve();
    // cout<<"NO RUNTIME ERROR"<<endl;
}
