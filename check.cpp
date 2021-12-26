// { Driver Code Starts
#include<bits/stdc++.h>
#define vi              vector<int>
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i >= n; --i)

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns area of the largest rectangle of 1's
	int maxArea(vector<bool> mat[], int r, int c) {
	    
	     vector<vector<int>> cnt(r,vector<int> (c,0));
         rep(i,r)
	    {
	        rep(j,c){
	            if(i == 0){
	                
	                cnt[i][j] = mat[i][j];
	            }
	            else{
    	            if(mat[i][j] == 0){
    	                cnt[i][j] = 0;
    	            }
    	            else{
    	                cnt[i][j] = mat[i][j]+cnt[i-1][j];
    	            }
	            }
	        }
	    }
	  
	   int max_area = 0;
	   for(int i=0; i<r; i++){
           sort(cnt[i].begin(),cnt[i].end());
           int minHeight = INT_MAX;
	       for(int j=c-1,width = 1; j>=0; j--,width++){
	           minHeight = min(minHeight,cnt[i][j]);
	           if(minHeight == 0){
	               
	               break;
	           }
	           else{
	               int area = width*minHeight;
	               max_area = max(max_area,area);
	           }
	       }
	   }
	   return max_area;
	
	    
	    
	    // code here
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c, x;
        cin >> r >> c;
        vector<bool> mat[r];
        for (int i = 0; i < r; i++) {
            mat[i].assign(c, false);
            for (int j = 0; j < c; j++) {
                cin >> x;
                mat[i][j] = x;
            }
        }
        Solution ob;
        auto max_area = ob.maxArea(mat, r, c);
        cout << max_area << "\n";

    }
    return 0;
}
  // } Driver Code Ends