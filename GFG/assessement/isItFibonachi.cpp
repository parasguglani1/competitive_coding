#include <bits/stdc++.h>
using namespace std;
long long solve(int N, int K, vector<long long> GeekNum)
{
    long long a[N + 1];
    long long sum = 0;
    for (long long i = 0; i < K; i++)
    {
        a[i] = GeekNum[i];
        sum += a[i];
    }
    // cout<<"sum = "<<sum<<endl;
    for (long long i = K; i < N; i++)
    {
        a[i] = sum;
        sum -= a[i - K];
        // cout << "sum = " << sum << endl;

        sum += a[i];
        // cout << "sum = " << sum << endl;
    }
    return a[N - 1];
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<long long> a(k);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    if (k == 1)
    {
        cout << a[0];
        return 0;
    }
    cout << solve(n, k, a);

    return 0;
}
