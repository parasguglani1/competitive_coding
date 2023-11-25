#include <bits/stdc++.h>
using namespace std;
#define int long long
//go front go back and pick 
long long solve(int N, int start, int finish, vector<int> Ticket_cost)
{
    start--;
    finish--;
    int ans = 0;
    int i = start;
    int fnt = 0, bck = 0;

    while (i != finish)
    {
        fnt += Ticket_cost[i];
        i = (i + 1) % N;
    }
    i = start;
    while (i != finish)
    {
        i = (i - 1 + N) % N;
        bck += Ticket_cost[i];
    }
    // cout << fnt << " " << bck << endl;
    ans = min(fnt, bck);
    return ans;
}

int32_t main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int start;
    cin >> start;
    int finish;
    cin >> finish;
    vector<int> Ticket_cost(N);
    for (int i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    {
        cin >> Ticket_cost[i_Ticket_cost];
    }

    long long out_;
    out_ = solve(N, start, finish, Ticket_cost);
    cout << out_;
}
