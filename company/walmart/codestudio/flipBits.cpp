#include <bits/stdc++.h>
using namespace std;
#define ll long long
string decToBinary(ll n)
{
    // array to store binary number
    // ll binaryNum[32];
    // ll *binaryNum = new ll[32];
    string binaryNum = "";

    // counter for binary array
    // ll i = 0;
    while (n > 0)
    {

        // storing remainder in binary array
        char a = n % 2 + '0';
        binaryNum.push_back(a);
        n = n / 2;
        // i++;
    }
    reverse(binaryNum.begin(), binaryNum.end());
    // cout << binaryNum << endl;

    // prlling binary array in reverse order
    // for (ll j = i - 1; j >= 0; j--)
    //     cout << binaryNum[j];
    return binaryNum;
}

ll numberOfFlips(ll a, ll b)
{
    string binaryA = decToBinary(a);
    string binaryB = decToBinary(b);
    // cout << binaryA << endl;
    if (binaryA.size() > binaryB.size())
    {
        ll diff = binaryA.size() - binaryB.size();
        for (ll i = 0; i < diff; i++)
        {
            binaryB.insert(binaryB.begin(), '0');
        }
    }
    else if (binaryB.size() > binaryA.size())
    {
        ll diff = binaryB.size() - binaryA.size();
        for (ll i = 0; i < diff; i++)
        {
            binaryA.insert(binaryA.begin(), '0');
        }
    }
    // cout << binaryB << endl;

    // ll* binaryA = decToBinary(a);
    // ll* binaryB = decToBinary(b);
    ll count = 0;

    for (ll i = 0; i < binaryA.size(); i++)
    {
        if (binaryA[i] != binaryB[i])
        {
            count++;
            // cout<<binaryA[i]<<" "<<binaryB[i]<<endl;
        }
    }
    return count;
}

//easy method
int numberOfFlips(int a, int b)
{
    int ans = 0;

    while (a > 0 or b > 0)
    {

        int bitA = a % 2;
        int bitB = b % 2;
        if (bitA != bitB)
        {
            // Mismatched bit found.
            ans = ans + 1;
        }
        a = a / 2;
        b = b / 2;
    }

    return ans;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = numberOfFlips(a, b);
        cout << ans << endl;
        // cout << numberOfFlips(a, b) << endl;
    }

    return 0;
}
