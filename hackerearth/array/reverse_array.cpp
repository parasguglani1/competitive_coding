#include <bits/stdc++.h>
using namespace std;
int main()
{
int Arr[10000];
int n;
cin>>n;

for (int i = 0; i < n; i++)
{
    cin>>Arr[i];
}

for (int i = n-1; i>=0; i--)
{
    cout<<Arr[i]<<"\n";
}

return 0;

}