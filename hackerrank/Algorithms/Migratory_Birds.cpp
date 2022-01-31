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
    int i, j, n, m;
    cin >> n;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

//method5 using Moore’s voting Algorithm
/*#include <iostream>
using namespace std;

int maxFreq(int *arr, int n) {
	//using moore's voting algorithm
	int res = 0;
	int count = 1;
	for(int i = 1; i < n; i++) {
		if(arr[i] == arr[res]) {
			count++;
		} else {
			count--;
		}
		
		if(count == 0) {
			res = i;
			count = 1;
		}
		
	}
	
	return arr[res];
}

int main()
{
	int arr[] = {40,50,30,40,50,30,30};
	int n = sizeof(arr) / sizeof(arr[0]);
	int freq = maxFreq(arr , n);
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] == freq) {
			count++;
		}
	}
	cout <<"Element " << maxFreq(arr , n) << " occurs " << count << " times" << endl;;
	return 0;
	//THE ABOVE VOTING ALGORITHM ONLY WORKS WHEN THE MAXIMUM OCCURRING ELEMENT IS MORE THAN (SIZEOFARRAY/2) TIMES;
}
*/



//method4 using hashing
// space complexity O(n)
// time complexity O(n)
// int mostFrequent(int arr[], int n)
// {
//     // Insert all elements in hash.
//     unordered_map<int, int> hash;
//     for (int i = 0; i < n; i++)
//         hash[arr[i]]++;
 
//     // find the max frequency
//     int max_count = 0, res = -1;
//     for (auto i : hash) {
//         if (max_count < i.second) {
//             res = i.first;
//             max_count = i.second;
//         }
//     }
 
//     return res;
// }
 


// method3 using extra array to store the count of each element without sorting
// space complexity O(n)
// time complexity O(n)
    vi b(n);
    rep(i, n)
    {
        b[a[i]]++;
        // cout<<b[i]<<" ";
    }
    // rep(i,n)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout << endl;
    int maxi = 0;
    int bird=0;
    rep(i, n)
    {
        if (b[i] > maxi)
        {
            maxi = b[i];
            // cout<<" max changed to "<<maxi<<endl;
            bird=i;
        }
       else if (b[i] == maxi)
        {
            if(a[i]<a[maxi])
            {
                maxi = b[i];
                // cout<<" max equal to "<<maxi<<endl;
            }
        
            
        }
    }
    cout << bird << endl;











//method 2 sort and keep a track of max count
// space complexity O(1)
// time complexity O(nlogn)
//     sortall(a);
//     int ans = 0, ele = 0,count=1;


//  int max_count = 1, res = a[0], curr_count = 1;
//     REP(i, 1, n) {
//         if (a[i] == a[i - 1])
//             curr_count++;
//         else {
//             if (curr_count > max_count) {
//                 max_count = curr_count;
//                 res = a[i - 1];
//             }
//             curr_count = 1;
//         }
//     }
 
//     // If last element is most frequent
//     if (curr_count > max_count)
//     {
//         max_count = curr_count;
//         res = a[n - 1];
//     }
//     cout << res << endl;



// first method
// space complexity O(n)
// time complexity O(nlogn)
    // using extra array to store the count of each element after sorting
    //   sortall(a);
    //   int ans = 0, ele = 0,count=1;
    // vi b(n);
    // rep(i,n-1)
    // {
    //     b[i]=count;
    //     if(a[i]!= a[i+1])
    //     {
    //         count=1;
    //     }
    //  else
    //  {
    //         count++;
           
    //  }
    // }
    // b[n-1]=count;
    // int max=b[0];
    // int maxi=0;

    // rep(i,n)
    // {
    //     if(b[i]>max)
    //     {
    //         max=b[i];
    //         maxi=i;
    //     }
    // }
    // cout<<a[maxi]<<endl;
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

  
        pgsolve();
    
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}