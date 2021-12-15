#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

       int n, x, k,count=0;
        cin >> n >> x >> k;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin >> A[i];
        }
        int B[n];
        for(int i=0;i<n;i++)
        {
            cin >> B[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if (abs(A[i] - B[i]) <= k)
            {
                count++;
            }
        }
        if (count >= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
        
}