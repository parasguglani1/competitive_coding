#include <bits/stdc++.h>

using namespace std;
#define siz 1000001
int main()
{

    int a[siz], b[siz];
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> a[i] >> b[i];
        }
        a[N] = a[0];
        b[N] = b[0];

        double cvex = 0, conv = 0, area = 0;

        for (int i = 0; i < N; i++)
        {
            double we = a[i] * b[i + 1] - a[i + 1] * b[i];
            area += we;
            cvex += we * (a[i] + a[i + 1]) / 3;
            conv += we * (b[i] + b[i + 1]) / 3;
        }

        cvex /= area;
        conv /= area;
        if (fabs(cvex) < 0.005 - 1e-9)
            cvex = 0;
        if (fabs(conv) < 0.005 - 1e-9)
            conv = 0;

        // printf("%.2f %.2f\n",
        //        cvex + 1e-9 * (cvex >= -1e-9 ? 1 : -1),
        //        conv + 1e-9 * (conv >= -1e-9 ? 1 : -1));
        cout << fixed << setprecision(2) << cvex << " " << conv << endl;
    }
}
