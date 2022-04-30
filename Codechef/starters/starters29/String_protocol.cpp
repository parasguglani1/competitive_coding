#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        long long n;
        int count  =0;
        cin>>n;
        string str;
        cin>>str;
        for(int i =0;i<n;i++)
        {
            count++;
            if(str[i]==str[i+1])
            {
                i ++;
            }
           
        }
        cout<<count<<endl;
    }
}