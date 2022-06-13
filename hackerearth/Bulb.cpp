#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int state;
    cin >> state;
    ll num;
    cin >> num; // Reading input from STDIN
    int divisors = 0;

    ll sqrt_n = sqrt(num);
    if ((sqrt_n * sqrt_n == num))
    {
        divisors = 1;
    }
    // for(int i=1;i<=sqrt(num);i++)
    // {

    // 	if(num%i==0)
    // 	{
    // 		if(num/i==i|| num==1)
    // 		{
    // 			divisors++;
    // 			continue;
    // 		}
    // 		divisors+=2;
    // 	}
    // https://codeforces.com/blog/entry/22317
    // finding divisors in O(n1/3)
    // }
    // cout<<divisors<<endl;
    if (divisors & 1)
    {
        // cout<<state<<endl;

        state = !state;
        // cout<<state<<endl;
    }
    if (state)
    {
        cout << "ON" << endl;
    }
    else
    {
        cout << "OFF" << endl;
    }
}