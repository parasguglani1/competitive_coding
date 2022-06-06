/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char *a[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll money = 0;
        for (ll i = 0; i < k; i++)
        {
            money += a[i];
        }
        cout << money << endl;
    }
}
