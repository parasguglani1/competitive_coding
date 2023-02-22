#include <bits/stdc++.h>

using namespace std;

#define pii pair<int, int>
#define MAX 10009

map<string, int> mp;
vector<pair<int, int>> places[MAX];

int dist[MAX];

void shortestPath(int from, int to)
{

    priority_queue<pii, vector<pii>, greater<pii>> p;

    p.push(pii(0, from));

    dist[from] = 0;

    while (!p.empty())
    {

        int u = p.top().second;

        p.pop();
        int nn = places[u].size();

        for (int i = 0; i < nn; i++)
        {
            int v = places[u][i].second;

            int c = places[u][i].first;

            if (dist[u] + c < dist[v])
            {

                dist[v] = dist[u] + c;

                p.push(pii(dist[v], v));
            }
        }
    }
}

int main()
{

    int t, n, p, nr, price, r;
    scanf("%d", &t);

    while (t--)
    {

        scanf("%d", &n);

        char str[20];
        for (int i = 0; i < n; i++)
        {

            scanf("%s%d", str, &p);

            mp[str] = i + 1;

            for (int j = 0; j < p; j++)
            {

                scanf("%d%d", &nr, &price);

                places[nr].push_back(pii(price, i + 1));
            }
        }

        scanf("%d", &r);
        char s1[20], s2[20];

        for (int i = 0; i < r; i++)
        {

            scanf("%s%s", s1, s2);

            int u = mp[s1];
            int v = mp[s2];

            for (int j = 0; j <= n; j++)
                dist[j] = 1000000000;

            shortestPath(u, v);

            printf("%d\n", dist[v]);
        }

        for (int i = 0; i <= n; i++)
            places[i].clear();
        mp.clear();
    }
}