#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

void swap_array(int n, int a[]) {
    vector<int> arr(n);
       int j=0;

    for (int i = 0; i < n; i=i+2,j++)
    {
        arr[j]=a[i];

    }

    for (int i = 1; i < n; i=i+2)
    {
        arr[j]=a[i];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        a[i]=arr[i];
    }


}

int main(){
    int T;
    cin>>T;
    while(T--){

          int i, n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        a[i] = i + 1;
    }

    int j=0;
        
    

    }
}
