#include <bits/stdc++.h>
//doesn't work for some numbers when digit is 0
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, D, count = 1, sum = 0, power_of_10, rem;
        cin >> N;
        cin >> D;

        int Digits;
        Digits = log10(N) + 1;
        // cout << Digits << "\n";
        while (Digits--)
        {
            power_of_10 = pow(10, count - 1);
            // cout << "power of 10 " << power_of_10 << "\n";
            if ((N / power_of_10) % 10 == D)
            {
                rem = N % power_of_10;
                N = N + power_of_10 - (rem);

                sum = sum + power_of_10 - (rem);
                // cout << N << "\n";
            }

            count++;
        }

        cout << sum << "\n";
        /* code */
    }
    return 0;
}