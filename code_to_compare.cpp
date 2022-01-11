#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int working(int n, int days)
{
    // int n,days;
    long long int sum = 1;
    // cin >> n >> days;
    for (int i = 1; i <= days; i++)
    {
        if (i <= 10)
        {
            sum *= 2;
            if (sum > n)
            {
                sum = n;
                break;
            }
        }
        else
        {
            sum *= 3;
            if (sum > n)
            {
                sum = n;
                break;
            }
        }
    }
// cout<<sum;
    return sum;
}

ll not_working(ll n, ll d)
{

    ll days = min(d, 10ll);
    // int d3=d-10;
    ll days2 = max(0ll, d - 10);
    // cout<<pow(2,days)<<endl;
    // cout<<pow(3,days2)<<endl;
    ll ans1 = 1;
    ll ans2 = 1;

    for (int i = 0; i < days; i++)
    {
        ans1 *= 2;
    }
    for (int i = 0; i < days2; i++)
    {
        ans2 *= 3;
    }

    // ll ans = (pow(2,days)) * (pow (3,days2));
    ll ans = ans1 * ans2;
    cout<<ans<<endl;
    cout<<n<<endl;

    ll answer = min(n, ans);
    cout<<answer<<endl;
    return answer;
}

int main()
{
    ll n=1000;
    ll test = not_working(10000,44);
    cout<<test<<endl;
//     for(int i=0;i<1000;i++)
// {
//     ll a1 =working(10000,i);
//     ll a2 =not_working(10000,i);
//     if(a1!=a2)
//     {
//         cout<<i<<endl;
//         cout<<a1<<endl;
//         cout<<a2<<endl;
//         break;
//     }
// }
    // if()!=not_working(10000,i)){
    // cout<<i<<endl;
    // break;}



    cout<<"same";

return 0;
}
