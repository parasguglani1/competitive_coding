#include <bits/stdc++.h>
typedef long long int ll;
#define int long long int
#define pb(x) push_back(x)
#define endl '\n'
int mod = 1000000007;
using namespace std;

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    stack<string> st1;
    stack<string> st2;
    while (t--)
    {
        int xx;
        cin >> xx;
        string stri;
        cin >> stri;

        if (xx == 1)
        {
            st1.push(stri);
        }
        else if (xx == 2)
        {
            int y = stoi(stri);
            while (y and !st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
                y--;
            }
        }
        else if (xx == 3)
        {
            int y = stoi(stri);
            while (y and !st2.empty())
            {
                st1.push(st2.top());
                st2.pop();
                y--;
            }
        }

        if (!st1.empty())
            cout << st1.top() << endl;
        else
            cout << "Nil" << endl;
    }
}
