#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()

void solve()
{
    // code starts from here
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int &i : A)
        cin >> i;
    for (int &i : B)
        cin >> i;

    map<int, int> mp;
    for (int i : A)
        mp[i]++;

    int mx = 0;
    for (auto p : mp)
        mx = max(mx, p.second);

    sort(all(A));
    sort(all(B));

    bool b = true;
    for (int i = 0; i < N; i++)
        if (A[i] > B[i])
            b = false;
    if (2 * mx <= N + 1 && b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;

    for (int _t = 1; _t <= T; _t++)
    {
        solve();
    }

    return 0;
}
