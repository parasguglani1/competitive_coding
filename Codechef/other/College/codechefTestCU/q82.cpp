
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    string mom = "";
    int mi = -1;
    string dad = "";
    int di = -1;
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'm' && mom.size() == 0)
        {
            mom += s[i];
            mi = i;
        }
        if (s[i] == 'o' && mom.size() == 1)
        {
            mom += s[i];
        }
        if (s[i] == 'm' && mom.size() == 2)
        {
            mom += s[i];
            res = mi;
            break;
        }
        if (s[i] == 'd' && dad.size() == 0)
        {
            dad += s[i];
            di = i;
        }
        if (s[i] == 'a' && dad.size() == 1)
        {
            dad += s[i];
        }
        if (s[i] == 'd' && dad.size() == 2)
        {
            dad += s[i];
            res = di;
            break;
        }
    }
    if (res == -1)
        cout << "Goo-Goo\n";
    else if (s[res] == 'd')
        cout << "Dad\n";
    else if (s[res] == 'm')
        cout << "Mom\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
