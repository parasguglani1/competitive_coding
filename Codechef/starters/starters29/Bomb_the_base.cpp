#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        long long n , x;
        cin>>n>>x;
        long long arr[n];
        long long destroyed_ind =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]<x)
            {
                destroyed_ind=i+1;             
            }
            
        }
        cout<<destroyed_ind<<endl;

    }

    return 0;
}