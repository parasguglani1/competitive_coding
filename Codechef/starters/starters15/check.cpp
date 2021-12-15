#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string S;
        cin >> S;
        map<ll , ll>a;
        map<ll , ll>b;
        for (int i = 0; i < n; i++)
        {
            a[i - (S[i] - 48)]++;
            b[i + (S[i] - 48)]++;
        }
        ll answer = 0;
        for(auto i = a.begin(); i != a.end(); i++)
        {
            answer += ((i -> second) * ( i -> second - 1))/2; 
        }
        for(auto i = b.begin(); i != b.end(); i++)
        {
            answer += ((i -> second) * ( i -> second - 1))/2; 
        }
        cout << answer << endl;
    }
}