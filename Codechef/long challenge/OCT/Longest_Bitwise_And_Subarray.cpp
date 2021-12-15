#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N, k, p;
    cin >> T;
    while (T--)
    {

        cin >> N;
        p = log(N) / log(2);
        k = pow(2, p);

        int x = k / 2;
        int y = N - k + 1;

        if (x > y)
        {
            cout << x << endl;
        }

        else
        {
            cout << y << endl;
        }
    }
    return 0;
}