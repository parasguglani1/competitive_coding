
#include <bits/stdc++.h>
using namespace std;
int from[26], to[26], grp[26];
char str[1010];
#define tr(i) for (int i = 0; i < 26; i++)
int findgroup(int r)
{
    if (grp[r] == r)
        return r;
    else
        return grp[r] = findgroup(grp[r]);
}
int main()
{
    int tc, n;
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%d", &n);
        tr(i)
        {
            from[i] = to[i] = 0;
            grp[i] = i;
        }
        while (n--)
        {
            scanf("%s", str);
            int len = strlen(str);
            int u = str[0] - 'a';
            int v = str[len - 1] - 'a';
            from[v]++;
            to[u]++;
            u = findgroup(u);
            v = findgroup(v);
            if (u != v)
                grp[u] = v;
        }
        set<int> set1;
        tr(i)
        {
            if (to[i] || from[i])
            {
                set1.insert(findgroup(i));
            }
        }
        int alone = (set1.size() == 1) ? 1 : 0;
        int pos1 = 0, mns1 = 0, other = 0;
        if (alone)
        {
            tr(i)

            {
                if (from[i] == 0 && to[i] == 0)
                    continue;
                if (from[i] - to[i] == 1)
                    pos1++;
                else if (from[i] - to[i] == -1)
                    mns1++;
                else if (from[i] - to[i] == 0)
                    ;
                else
                    other++;
            }
        }
        bool check1 = alone && other == 0;
        bool check2 = pos1 == 0 && mns1 == 0;
        bool check3 = pos1 == 1 && mns1 == 1;
        if (check1 && ((check2) || (check3)))
            printf("Ordering is possible.\n");
        else
            printf("The door cannot be opened.\n");
    }
}