#include <bits/stdc++.h>
using namespace std;
int minCapacity(int n, int a[])
{
    sort(a, a + n);
    int maxx = a[0];

    for (int i = 1; i < n; i++)
    {
        maxx = max(a[i]-i, maxx);
    }
    int freq = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == maxx)
    //     {
    //         freq++;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << max(a[i] - 9, 0) << " ";
    // }
    // cout << endl;
    return maxx;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << minCapacity(n, a) << endl;

    return 0;
}
