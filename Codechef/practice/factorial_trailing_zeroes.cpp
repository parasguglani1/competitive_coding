#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        while (n >= 5)
        {
            n = n / 5;
            sum += n;
        }
        cout << sum << endl;
    }
    return 0;
}