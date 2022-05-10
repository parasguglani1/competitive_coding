#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define rall(r) r.begin(), r.end()
#define sex k *k == n
#define loop   \
    int i = 0; \
    i < n;     \
    i++
ll inf = pow(10, 18);

using namespace std;

void solve()
{
    int n, board;
    cin >> n;

    vector<int> vp(n + 10, 0), boards, oness;
    for (auto &x : vp)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (i == n)
            boards.pb(ceil((float)vp[i] / 2));
        else
        {
            boards.pb(ceil((float)vp[i] / 2));
            if (i < n - 1)
                oness.pb(ceil((float)(vp[i] + vp[i + 1]) / 3));
            if (i < n - 2)
                oness.pb(ceil((float)(vp[i] + vp[i + 2]) / 2));
        }
    }
    sort(rall(oness));
    sort(rall(boards));

    board = boards.back() + boards[boards.size() - 2];
    cout << min(board, oness.back()) << nl;
}

int main()
{

    solve();

    return 0;
}