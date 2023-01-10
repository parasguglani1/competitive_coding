#include <bits/stdc++.h>

using namespace std;

void sksolve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    int sum = 0;
    int flag = 0;
    for (auto x : v)
    {
        if (sum == x)
        {
            flag = 1;
            break;
        }
        sum += x;
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        for (auto x : v)
        {
            cout << x << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sksolve();
    }
}
