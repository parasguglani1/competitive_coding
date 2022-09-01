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
/*
There are a lot of solutions to this problem. Here I will describe one of them.

First, we observe that having the XOR of even indexed numbers and odd indexed numbers equal is equivalent to having the XOR of all the elements equal to 0. Let's note with a the XOR of all odd indexed numbers and b the xor of all even indexed numbers. Notice that the XOR of all the array equals 0 if and only if a = b.

So how do we generate such an array with XOR of all elements 0? Our first instinct might be to arbitrarily generate the first n−1 numbers, then set the last element as the XOR of the first n−1, ensuring that the total XOR is 0. However, we might have problems with the condition that all elements must be distinct. Let's arbitrarily set the first n−2 so that they don't have the highest bit(230) set, and then the n−1-th number can be just 230. The last number can be the XOR of the first n−2 XOR the n−1-th number; you will be sure that the last number has not occurred in the first n−2 elements because they don't have the highest bit set while the last number must have the highest bit set. But how do we know that the n−1-th number and the n-th number will not be equal? This occurs only if the total XOR of the first n−2 numbers equals 0. To fix this, we can just choose a different arbitrary number in one of the n−2 spots.

For example, my solution checks if the XOR of the numbers 0,1,2...,n−4,n−3 is 0. If it is not 0, great! We can use the simple solution without any changes. However, if the XOR is 0 I use the numbers 1,2,3,....,n−3,n−2 in their place. These two sequences have different XORs, so it ensures that one of them always works.

Alternate Tutorial Sketch
Output the integers from 1 to n−3, then 229, 230, and the XOR of those n−1 numbers. Why does it work? */
void pgsolve()
{
    int n;
    cin >> n;
    int case1 = 0;
    int case2 = 0;
    for (int i = 0; i < n - 2; i++)
    {
        case1 ^= i;
        case2 ^= (i + 1);
    }
    long long addLast = ((long long)1 << 31) - 1;
    if (case1 != 0)
    {
        for (int i = 0; i < n - 2; i++)
        {
            cout << i << " ";
        }
        case1 ^= addLast;
        cout << addLast << " " << case1 << endl;
    }
    else
    {
        for (int i = 1; i <= n - 2; i++)
        {
            cout << i << " ";
        }
        case2 ^= addLast;
        cout << addLast << " " << case2 << endl;
    }

    /*

        int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n - 1; i++)
        arr[i] = i;
    int xorEve = arr[0];
    int xorOdd = arr[1];
    for(int i = 2; i < n - 1; i++){
        if( !(i & 1) )
            xorEve ^= arr[i];
        else
            xorOdd ^= arr[i];
    }
    int newNum = (xorOdd ^ xorEve);
    // if( find(arr.begin(), arr.end(), newNum) != arr.end() ){
    //     newNum |= arr[n - 2];
    // }
    arr[n - 1] = newNum;
    arr[n - 1] |= (1 << 29);
    arr[n - 3] |= (1 << 29);
    for(auto &a : arr)
        cout << a << " ";
 */
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
