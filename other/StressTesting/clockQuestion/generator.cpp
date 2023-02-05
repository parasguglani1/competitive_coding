#include <bits/stdc++.h>
using namespace std;

int randomNumberBetween(int a, int b)
{
    if (a > b)
        swap(a, b);
    return a + rand() % (b - a + 1);
}

int main(int argc, char *argv[])
{
    // srand(atoi(argv[1]));
    srand(time(NULL));
    // random 10:00
    //  09:00

    int l1 = randomNumberBetween(0, 23);
    int l2 = randomNumberBetween(0, 59);
    int r1 = randomNumberBetween(0, 23);
    int r2 = randomNumberBetween(0, 59);

    int t = randomNumberBetween(1, 180);

    int t1 = l1 * 60 + l2;
    int t2 = r1 * 60 + r2;
    if (t1 < t2)
    {
        swap(l1, r1);
        swap(l2, r2);
    }
    // convert l1 to string
    string l1s = to_string(l1);
    string l2s = to_string(l2);
    string r1s = to_string(r1);
    string r2s = to_string(r2);

    if (l1s.length() == 1)
    {
        l1s = "0" + l1s;
    }
    if (l2s.length() == 1)
    {
        l2s = "0" + l2s;
    }
    if (r1s.length() == 1)
    {
        r1s = "0" + r1s;
    }
    if (r2s.length() == 1)
    {
        r2s = "0" + r2s;
    }
    cout << l1s << ":" << l2s << endl;
    cout << r1s << ":" << r2s << endl;
    cout << t << endl;
}
